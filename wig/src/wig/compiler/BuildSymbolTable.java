package wig.compiler;

import wig.compiler.builder.CompoundStmSymbolTable;
import wig.compiler.builder.FunctionSymbolTable;
import wig.compiler.builder.HtmlSymbolTable;
import wig.compiler.builder.SchemaSymbolTable;
import wig.compiler.builder.VariableSymbolTable;
import wig.compiler.symbol.SymbolTable;
import wig.compiler.symbolkind.Function;
import wig.compiler.symbolkind.Schema;
import wig.compiler.symbolkind.Session;
import wig.compiler.symbolkind.html.Html;
import wig.node.ACompoundstm;
import wig.node.AFunction;
import wig.node.AHtml;
import wig.node.ASchema;
import wig.node.AService;
import wig.node.ASession;
import wig.node.AVariable;
import wig.node.Start;

public class BuildSymbolTable {

	public static SymbolTable run(final Start node, final Boolean display) {
		final SymbolTable returnValue = new SymbolTable();
		final AService service = (AService) node.getPService();
		// Building Html SymbolTable
		for (Object html : service.getHtml()) {
			assert html instanceof AHtml : "Grammar as of Monday 24th October, 2011 assumes PHtml can only be AHtml";
			final Html htmlKind = HtmlSymbolTable
					.buildHtmlSymbolKind((AHtml) html);
			returnValue.putSymbol(((AHtml) html).getIdentifier().toString(),
					htmlKind);
			if (display)
				System.out.println(htmlKind.toString());
		}

		for (Object schema : service.getSchema()) {
			assert schema instanceof ASchema : "Grammar as of Monday 24th October, 2011 assumes PSchema can only be ASchema";
			final Schema schemaKind = SchemaSymbolTable
					.buildSchemaSymbolKind((ASchema) schema);
			returnValue.putSymbol(
					((ASchema) schema).getIdentifier().toString(), schemaKind);
			if (display)
				System.out.println(schemaKind.toString());
		}

		for (Object variable : service.getVariable()) {
			assert variable instanceof AVariable : "Grammar as of Monday 24th October, 2011 assumes PVariable can only be Avariable";
			VariableSymbolTable.buildAndPutVariableSymbolKind(returnValue,
					(AVariable) variable, display);

		}

		// Will have to handle in 2 pass for compoundstm
		for (Object function : service.getFunction()) {
			assert function instanceof AFunction : "Grammar as of Monday 24th October, 2011 assumes PFunction can only be AFunction";
			final Function functionKind = FunctionSymbolTable
					.buildFunctionSymbolKind(returnValue, (AFunction) function);
			returnValue.putSymbol(((AFunction) function).getIdentifier()
					.toString(), functionKind);
		}

		for (Object function : service.getFunction()) {
			assert function instanceof AFunction : "Grammar as of Monday 24th October, 2011 assumes PFunction can only be AFunction";
			final SymbolTable functionImpl = new SymbolTable();

			functionImpl.scopeSymbolTable(returnValue);
			AFunction functionNode = (AFunction) function;
			Function functionHead = (Function) returnValue.getSymbol(
					functionNode.getIdentifier().toString()).getKind();
			if (display) {
				System.out.print(functionHead.toString());
				System.out.print("{\n");
			}
			FunctionSymbolTable.buildAndPutArgumentSymbols(functionHead,
					functionImpl, functionNode.getArguments(), display);
			CompoundStmSymbolTable.buildCompountStmSymbolTable(functionImpl,
					(ACompoundstm) functionNode.getCompoundstm(), display);
			if (display) {
				System.out.print("}\n\n");
			}

		}

		// Not going to build this in multipass
		for (Object session : service.getSession()) {
			final ASession sessionNode = (ASession) session;
			final Session sessionKind = new Session();
			sessionKind.setName(sessionNode.getIdentifier().toString());
			if (display) {
				System.out.print(sessionKind.toString() + "{\n");
			}
			final SymbolTable sessionImpl = new SymbolTable();
			sessionImpl.scopeSymbolTable(returnValue);
			CompoundStmSymbolTable.buildCompountStmSymbolTable(sessionImpl,
					(ACompoundstm) sessionNode.getCompoundstm(), display);
			if (display) {
				System.out.print("}\n\n");
			}

		}

		return returnValue;
	}
}
