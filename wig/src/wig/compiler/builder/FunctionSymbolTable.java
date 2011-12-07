package wig.compiler.builder;

import wig.compiler.symbol.SymbolTable;
import wig.compiler.symbolkind.Argument;
import wig.compiler.symbolkind.Function;
import wig.node.AArgument;
import wig.node.AFunction;
import wig.node.AManyArguments;
import wig.node.AOneArguments;
import wig.node.ASimpleType;
import wig.node.ATupleType;
import wig.node.PArguments;

public class FunctionSymbolTable {

	public static Function buildFunctionSymbolKind(final SymbolTable table,
			final AFunction node) {
		final Function returnValue = new Function();
		returnValue.setName(node.getIdentifier().toString());
		if (node.getType() instanceof ASimpleType) {
			returnValue.setType(table, node.getType().toString());
		} else if (node.getType() instanceof ATupleType) {
			returnValue.setType(table, ((ATupleType) node.getType())
					.getIdentifier().toString());
		}
		return returnValue;
	}

	public static void buildAndPutArgumentSymbols(final Function functionHead,
			final SymbolTable table, final PArguments arguments,
			final Boolean display) {
		if (arguments instanceof AOneArguments) {
			final Argument argument = new Argument();
			AOneArguments argumentNode = (AOneArguments) arguments;
			AArgument arg = (AArgument) argumentNode.getArgument();
			argument.setName(arg.getIdentifier().toString());
			if (arg.getType() instanceof ASimpleType) {
				argument.setType(table, arg.getType().toString());
				functionHead.addArgumentType(table, arg.getType().toString());
			} else if (arg.getType() instanceof ATupleType) {
				argument.setType(table, ((ATupleType) arg.getType())
						.getIdentifier().toString());
				functionHead.addArgumentType(table, ((ATupleType) arg.getType())
						.getIdentifier().toString());
			}
			table.putSymbol(argument.getName(), argument);
			if (display)
				System.out.print(argument.toString());
		} else if (arguments instanceof AManyArguments) {
			final Argument argument = new Argument();
			final AArgument argNode = (AArgument) ((AManyArguments) arguments)
					.getArgument();
			argument.setName(argNode.getIdentifier().toString());
			if (argNode.getType() instanceof ASimpleType) {
				argument.setType(table, argNode.getType().toString());
				functionHead.addArgumentType(table, argNode.getType().toString());
			} else if (argNode.getType() instanceof ATupleType) {
				argument.setType(table, ((ATupleType) argNode.getType())
						.getIdentifier().toString());
				functionHead.addArgumentType(table, ((ATupleType) argNode.getType())
						.getIdentifier().toString());
			}
			table.putSymbol(argument.getName(), argument);
			if (display)
				System.out.print(argument.toString());
			buildAndPutArgumentSymbols(functionHead,table,
					((AManyArguments) arguments).getArguments(), display);

		}
	}
}
