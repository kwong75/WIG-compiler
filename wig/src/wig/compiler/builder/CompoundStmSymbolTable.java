package wig.compiler.builder;

import java.util.ArrayList;
import java.util.List;

import wig.compiler.symbol.Symbol;
import wig.compiler.symbol.SymbolTable;
import wig.compiler.symbolkind.Field;
import wig.compiler.symbolkind.Function;
import wig.compiler.symbolkind.Local;
import wig.compiler.symbolkind.Schema;
import wig.compiler.symbolkind.Variable;
import wig.compiler.symbolkind.html.Html;
import wig.node.AAndAndExp;
import wig.node.AAssignExp;
import wig.node.ACallBaseExp;
import wig.node.ACompStm;
import wig.node.ACompStmNoShortIf;
import wig.node.ACompoundstm;
import wig.node.ADefaultAddExp;
import wig.node.ADefaultAndExp;
import wig.node.ADefaultCmpExp;
import wig.node.ADefaultExp;
import wig.node.ADefaultJoinExp;
import wig.node.ADefaultMultExp;
import wig.node.ADefaultOrExp;
import wig.node.ADefaultTupleExp;
import wig.node.ADefaultUnaryExp;
import wig.node.ADivMultExp;
import wig.node.AEqCmpExp;
import wig.node.AExitStm;
import wig.node.AExitStmNoShortIf;
import wig.node.AExpStm;
import wig.node.AExpStmNoShortIf;
import wig.node.AFieldvalue;
import wig.node.AGtCmpExp;
import wig.node.AGteqCmpExp;
import wig.node.AIdDocument;
import wig.node.AIfStm;
import wig.node.AIfelseStm;
import wig.node.AIfelseStmNoShortIf;
import wig.node.AInput;
import wig.node.AJoinJoinExp;
import wig.node.ALtCmpExp;
import wig.node.ALteqCmpExp;
import wig.node.ALvalueBaseExp;
import wig.node.AManyExps;
import wig.node.AManyFieldvalues;
import wig.node.AManyInputs;
import wig.node.AManyPlugs;
import wig.node.AMinusAddExp;
import wig.node.AModMultExp;
import wig.node.AMultMultExp;
import wig.node.ANegUnaryExp;
import wig.node.ANeqCmpExp;
import wig.node.ANotUnaryExp;
import wig.node.AOneExps;
import wig.node.AOneFieldvalues;
import wig.node.AOneInputs;
import wig.node.AOnePlugs;
import wig.node.AOrOrExp;
import wig.node.AParenBaseExp;
import wig.node.APlug;
import wig.node.APlugDocument;
import wig.node.APlusAddExp;
import wig.node.AQualifiedLvalue;
import wig.node.AReceive;
import wig.node.ARetexpStm;
import wig.node.ARetexpStmNoShortIf;
import wig.node.AShowStm;
import wig.node.AShowStmNoShortIf;
import wig.node.ASimpleLvalue;
import wig.node.ATupleBaseExp;
import wig.node.AVariable;
import wig.node.AWhileStm;
import wig.node.AWhileStmNoShortIf;
import wig.node.PAddExp;
import wig.node.PAndExp;
import wig.node.PBaseExp;
import wig.node.PCmpExp;
import wig.node.PDocument;
import wig.node.PExp;
import wig.node.PExps;
import wig.node.PFieldvalue;
import wig.node.PFieldvalues;
import wig.node.PInputs;
import wig.node.PJoinExp;
import wig.node.PLvalue;
import wig.node.PMultExp;
import wig.node.POrExp;
import wig.node.PPlugs;
import wig.node.PStm;
import wig.node.PStmNoShortIf;
import wig.node.PTupleExp;
import wig.node.PUnaryExp;

public class CompoundStmSymbolTable {

	public static void buildCompountStmSymbolTable(final SymbolTable parent,
			final ACompoundstm node, final Boolean display) {
		final SymbolTable table = new SymbolTable();
		table.scopeSymbolTable(parent);
		for (Object variable : node.getVariable()) {
			AVariable variableNode = (AVariable) variable;
			VariableSymbolTable.buildAndPutVariableSymbolKind(table,
					variableNode, display);
		}
		for (Object stm : node.getStm()) {
			buildStmSymbolTable(table, (PStm) stm, display);
		}
	}

	public static void buildStmSymbolTable(final SymbolTable parent,
			final PStm node, final Boolean display) {
		if (node instanceof AShowStm) {
			AShowStm node2 = (AShowStm) node;
			Html html = buildDocumentSymbolTable(parent, node2.getDocument(),
					display);
			if (node2.getReceive() != null) {
				buildReceiveSymbolTable(html, parent,
						(AReceive) node2.getReceive(), display);
			}
		} else if (node instanceof AExitStm) {
			AExitStm node2 = (AExitStm) node;
			buildDocumentSymbolTable(parent, node2.getDocument(), display);
		} else if (node instanceof ARetexpStm) {
			ARetexpStm node2 = (ARetexpStm) node;
			buildExpSymbolTable(parent, node2.getExp(), display);
		} else if (node instanceof AIfStm) {
			buildExpSymbolTable(parent, ((AIfStm) node).getExp(), display);
			SymbolTable table = new SymbolTable();
			table.scopeSymbolTable(parent);
			buildStmSymbolTable(table, ((AIfStm) node).getStm(), display);
		} else if (node instanceof AIfelseStm) {
			buildExpSymbolTable(parent, ((AIfelseStm) node).getExp(), display);
			SymbolTable table = new SymbolTable();
			table.scopeSymbolTable(parent);
			buildStmNoShortIfSymbolTable(table,
					((AIfelseStm) node).getThenStm(), display);
			SymbolTable elseTable = new SymbolTable();
			elseTable.scopeSymbolTable(parent);
			buildStmSymbolTable(elseTable, ((AIfelseStm) node).getElseStm(),
					display);
		} else if (node instanceof AWhileStm) {
			buildExpSymbolTable(parent, ((AWhileStm) node).getExp(), display);
			SymbolTable table = new SymbolTable();
			table.scopeSymbolTable(parent);
			buildStmSymbolTable(table, ((AWhileStm) node).getStm(), display);
		} else if (node instanceof ACompStm) {
			buildCompountStmSymbolTable(parent,
					(ACompoundstm) ((ACompStm) node).getCompoundstm(), display);
		} else if (node instanceof AExpStm) {
			buildExpSymbolTable(parent, ((AExpStm) node).getExp(), display);
		}
	}

	public static void buildStmNoShortIfSymbolTable(final SymbolTable parent,
			final PStmNoShortIf node, final Boolean display) {
		if (node instanceof AShowStmNoShortIf) {
			AShowStmNoShortIf node2 = (AShowStmNoShortIf) node;
			buildDocumentSymbolTable(parent, node2.getDocument(), display);
		} else if (node instanceof AExitStmNoShortIf) {
			AExitStmNoShortIf node2 = (AExitStmNoShortIf) node;
			buildDocumentSymbolTable(parent, node2.getDocument(), display);
		} else if (node instanceof ARetexpStmNoShortIf) {
			ARetexpStmNoShortIf node2 = (ARetexpStmNoShortIf) node;
			buildExpSymbolTable(parent, node2.getExp(), display);
		} else if (node instanceof AIfelseStmNoShortIf) {
			buildExpSymbolTable(parent, ((AIfelseStmNoShortIf) node).getExp(), display);
			SymbolTable table = new SymbolTable();
			table.scopeSymbolTable(parent);
			buildStmNoShortIfSymbolTable(table,
					((AIfelseStmNoShortIf) node).getThenStm(), display);
			SymbolTable elseTable = new SymbolTable();
			elseTable.scopeSymbolTable(parent);
			buildStmNoShortIfSymbolTable(elseTable, ((AIfelseStmNoShortIf) node).getElseStm(),
					display);
		} else if (node instanceof AWhileStmNoShortIf) {
			buildExpSymbolTable(parent, ((AWhileStmNoShortIf) node).getExp(), display);
			SymbolTable table = new SymbolTable();
			table.scopeSymbolTable(parent);
			buildStmNoShortIfSymbolTable(table, ((AWhileStmNoShortIf) node).getStmNoShortIf(), display);
		} else if (node instanceof ACompStmNoShortIf) {
			buildCompountStmSymbolTable(parent,
					(ACompoundstm) ((ACompStmNoShortIf) node).getCompoundstm(),
					display);
		} else if (node instanceof AExpStmNoShortIf) {
			buildExpSymbolTable(parent, ((AExpStmNoShortIf) node).getExp(), display);
		}
	}

	/* Has a return type because this html should build both plug and receive*/
	public static Html buildDocumentSymbolTable(final SymbolTable parent,
			final PDocument node, final Boolean display) {
		if (node instanceof AIdDocument) {
			Symbol htmlSymbol = parent.getSymbol(((AIdDocument) node)
					.getIdentifier().toString(), Html.class);
			if (htmlSymbol == null) {
				throw new RuntimeException("Failed to find html "
						+ ((AIdDocument) node).getIdentifier().toString());
			}
			// Analysis to make sure the parameter is proper
			Html htmlSymbolKind = (Html) htmlSymbol.getKind();
			if (htmlSymbolKind.getPlugs().size() != 0) {
				throw new RuntimeException(htmlSymbolKind.getName()
						+ " has more than one Holes expected "
						+ htmlSymbolKind.getPlugs().size() + " plugs");
			}
			return htmlSymbolKind;
		} else if (node instanceof APlugDocument) {
			Symbol htmlSymbol = parent.getSymbol(((APlugDocument) node)
					.getIdentifier().toString(), Html.class);
			// Analysis to make sure the parameter is proper
			Html htmlSymbolKind = (Html) htmlSymbol.getKind();
			buildAndCheckPlugSymbolTable(parent, htmlSymbolKind,
					(APlugDocument) node, display);
			return htmlSymbolKind;
		}
		return null;
	}

	//TODO: Need to check name
	public static void buildAndCheckPlugSymbolTable(final SymbolTable table,
			final Html htmlSymbolKind, final APlugDocument node,
			final Boolean display) {
		final List<APlug> plugs = getPlugList(node.getPlugs());
		final List<String> identifiers = new ArrayList<String>();
		for (final APlug plug : plugs) {
			identifiers.add(plug.getIdentifier().toString());
		}

		// Check
		if (!htmlSymbolKind.validPlugs(identifiers)) {
			throw new RuntimeException("Plug error for "
					+ htmlSymbolKind.getName());
		}

		for (final APlug plug : plugs) {
			buildExpSymbolTable(table, plug.getExp(), display);
		}
	}

	public static List<APlug> getPlugList(PPlugs plugs) {
		final List<APlug> returnValue = new ArrayList<APlug>();
		getPlugList(plugs, returnValue);
		return returnValue;
	}

	private static void getPlugList(PPlugs plugs, List<APlug> returnValue) {
		if (plugs instanceof AOnePlugs) {
			returnValue.add((APlug) ((AOnePlugs) plugs).getPlug());
		} else if (plugs instanceof AManyPlugs) {
			returnValue.add((APlug) ((AManyPlugs) plugs).getPlug());
			getPlugList(((AManyPlugs) plugs).getPlugs(), returnValue);
		}
	}

	//TODO: Need to check name
	private static void buildReceiveSymbolTable(Html html, SymbolTable parent,
			AReceive node, Boolean display) {
		final List<AInput> inputs = getInputList(node.getInputs());
		final List<String> identifiers = new ArrayList<String>();
		for (final AInput input : inputs) {
			identifiers.add(input.getIdentifier().toString());
		}

		// Check
		if (!html.validReceives(identifiers)) {
			throw new RuntimeException("Input error for " + html.getName());
		}

		for (final AInput plug : inputs) {
			checkLvalueSymbolTable(parent, plug.getLvalue(), display);
		}
	}

	public static List<AInput> getInputList(PInputs inputs) {
		final List<AInput> returnValue = new ArrayList<AInput>();
		getInputList(inputs, returnValue);
		return returnValue;
	}

	private static void getInputList(PInputs inputs, List<AInput> returnValue) {
		if (inputs instanceof AOneInputs) {
			returnValue.add((AInput) ((AOneInputs) inputs).getInput());
		} else if (inputs instanceof AManyInputs) {
			getInputList(((AManyInputs) inputs).getInputs(), returnValue);
			returnValue.add((AInput) ((AManyInputs) inputs).getInput());
		}
	}

	public static void buildExpSymbolTable(SymbolTable table, PExp exp,
			Boolean display) {
		if (exp instanceof AAssignExp) {
			checkLvalueSymbolTable(table, ((AAssignExp) exp).getLvalue(),
					display);
			checkOrExpSymbolTable(table, ((AAssignExp) exp).getOrExp(), display);
		} else if (exp instanceof ADefaultExp) {
			checkOrExpSymbolTable(table, ((ADefaultExp) exp).getOrExp(),
					display);
		}
	}

	private static void checkOrExpSymbolTable(SymbolTable table, POrExp orExp,
			Boolean display) {
		if (orExp instanceof AOrOrExp) {
			checkOrExpSymbolTable(table, ((AOrOrExp) orExp).getLeft(), display);
			checkAndExpSymbolTable(table, ((AOrOrExp) orExp).getRight(),
					display);
		} else if (orExp instanceof ADefaultOrExp) {
			checkAndExpSymbolTable(table, ((ADefaultOrExp) orExp).getAndExp(),
					display);
		}
	}

	private static void checkAndExpSymbolTable(SymbolTable table,
			PAndExp andExp, Boolean display) {
		if (andExp instanceof AAndAndExp) {
			checkAndExpSymbolTable(table, ((AAndAndExp) andExp).getLeft(),
					display);
			checkCmpExpSymbolTable(table, ((AAndAndExp) andExp).getRight(),
					display);
		} else if (andExp instanceof ADefaultAndExp) {
			checkCmpExpSymbolTable(table,
					((ADefaultAndExp) andExp).getCmpExp(), display);
		}

	}

	private static void checkCmpExpSymbolTable(SymbolTable table,
			PCmpExp cmpExp, Boolean display) {
		if (cmpExp instanceof AEqCmpExp) {
			checkAddExpSymbolTable(table, ((AEqCmpExp) cmpExp).getLeft(),
					display);
			checkAddExpSymbolTable(table, ((AEqCmpExp) cmpExp).getRight(),
					display);
		} else if (cmpExp instanceof ANeqCmpExp) {
			checkAddExpSymbolTable(table, ((ANeqCmpExp) cmpExp).getLeft(),
					display);
			checkAddExpSymbolTable(table, ((ANeqCmpExp) cmpExp).getRight(),
					display);
		} else if (cmpExp instanceof ALtCmpExp) {
			checkAddExpSymbolTable(table, ((ALtCmpExp) cmpExp).getLeft(),
					display);
			checkAddExpSymbolTable(table, ((ALtCmpExp) cmpExp).getRight(),
					display);
		} else if (cmpExp instanceof AGtCmpExp) {
			checkAddExpSymbolTable(table, ((AGtCmpExp) cmpExp).getLeft(),
					display);
			checkAddExpSymbolTable(table, ((AGtCmpExp) cmpExp).getRight(),
					display);
		} else if (cmpExp instanceof ALteqCmpExp) {
			checkAddExpSymbolTable(table, ((ALteqCmpExp) cmpExp).getLeft(),
					display);
			checkAddExpSymbolTable(table, ((ALteqCmpExp) cmpExp).getRight(),
					display);
		} else if (cmpExp instanceof AGteqCmpExp) {
			checkAddExpSymbolTable(table, ((AGteqCmpExp) cmpExp).getLeft(),
					display);
			checkAddExpSymbolTable(table, ((AGteqCmpExp) cmpExp).getRight(),
					display);
		} else if (cmpExp instanceof ADefaultCmpExp) {
			checkAddExpSymbolTable(table,
					((ADefaultCmpExp) cmpExp).getAddExp(), display);
		}
	}

	private static void checkAddExpSymbolTable(SymbolTable table,
			PAddExp addExp, Boolean display) {
		if (addExp instanceof APlusAddExp) {
			checkAddExpSymbolTable(table, ((APlusAddExp) addExp).getLeft(),
					display);
			checkMultExpSymbolTable(table, ((APlusAddExp) addExp).getRight(),
					display);
		} else if (addExp instanceof AMinusAddExp) {
			checkAddExpSymbolTable(table, ((AMinusAddExp) addExp).getLeft(),
					display);
			checkMultExpSymbolTable(table, ((AMinusAddExp) addExp).getRight(),
					display);
		} else if (addExp instanceof ADefaultAddExp) {
			checkMultExpSymbolTable(table,
					((ADefaultAddExp) addExp).getMultExp(), display);
		}
	}

	private static void checkMultExpSymbolTable(SymbolTable table,
			PMultExp multExp, Boolean display) {
		if (multExp instanceof AMultMultExp) {
			checkMultExpSymbolTable(table, ((AMultMultExp) multExp).getLeft(),
					display);
			checkJoinExpSymbolTable(table, ((AMultMultExp) multExp).getRight(),
					display);
		} else if (multExp instanceof ADivMultExp) {
			checkMultExpSymbolTable(table, ((ADivMultExp) multExp).getLeft(),
					display);
			checkJoinExpSymbolTable(table, ((ADivMultExp) multExp).getRight(),
					display);
		} else if (multExp instanceof AModMultExp) {
			checkMultExpSymbolTable(table, ((AModMultExp) multExp).getLeft(),
					display);
			checkJoinExpSymbolTable(table, ((AModMultExp) multExp).getRight(),
					display);
		} else if (multExp instanceof ADefaultMultExp) {
			checkJoinExpSymbolTable(table,
					((ADefaultMultExp) multExp).getJoinExp(), display);
		}

	}

	private static void checkJoinExpSymbolTable(SymbolTable table,
			PJoinExp joinExp, Boolean display) {
		if (joinExp instanceof AJoinJoinExp) {
			checkTupleExpSymbolTable(table, ((AJoinJoinExp) joinExp).getLeft(),
					display);
			checkJoinExpSymbolTable(table, ((AJoinJoinExp) joinExp).getRight(),
					display);
		} else if (joinExp instanceof ADefaultJoinExp) {
			checkTupleExpSymbolTable(table,
					((ADefaultJoinExp) joinExp).getTupleExp(), display);
		}

	}

	private static void checkTupleExpSymbolTable(SymbolTable table,
			PTupleExp tupleExp, Boolean display) {
		// TODO: figure out what keep removes does
		if (tupleExp instanceof ADefaultTupleExp) {
			checkUnaryExpSymbolTable(table,
					((ADefaultTupleExp) tupleExp).getUnaryExp(), display);
		}
	}

	private static void checkUnaryExpSymbolTable(SymbolTable table,
			PUnaryExp unaryExp, Boolean display) {
		if (unaryExp instanceof ANotUnaryExp) {
			checkBaseExpSymbolTable(table,
					((ANotUnaryExp) unaryExp).getBaseExp(), display);
		} else if (unaryExp instanceof ANegUnaryExp) {
			checkBaseExpSymbolTable(table,
					((ANegUnaryExp) unaryExp).getBaseExp(), display);
		} else if (unaryExp instanceof ADefaultUnaryExp) {
			checkBaseExpSymbolTable(table,
					((ADefaultUnaryExp) unaryExp).getBaseExp(), display);
		}

	}

	private static void checkBaseExpSymbolTable(SymbolTable table,
			PBaseExp baseExp, Boolean display) {
		if (baseExp instanceof ALvalueBaseExp) {
			checkLvalueSymbolTable(table,
					((ALvalueBaseExp) baseExp).getLvalue(), display);
		} else if (baseExp instanceof ACallBaseExp) {
			checkACallBaseExpSymbolTable(table, (ACallBaseExp) baseExp, display);
		} else if (baseExp instanceof ATupleBaseExp) {
			checkATupleBaseExpSymbolTable(table, (ATupleBaseExp) baseExp,
					display);
		} else if (baseExp instanceof AParenBaseExp) {
			// TODO Not quite sure if this is correct
			SymbolTable child = new SymbolTable();
			child.scopeSymbolTable(table);
			buildExpSymbolTable(child, ((AParenBaseExp) baseExp).getExp(),
					display);
		}
	}

	private static void checkACallBaseExpSymbolTable(SymbolTable table,
			ACallBaseExp baseExp, Boolean display) {
		Symbol functionsym = table.getSymbol(
				baseExp.getIdentifier().toString(), Function.class);
		if (functionsym == null) {
			throw new RuntimeException("Failed to find function "
					+ baseExp.getIdentifier().toString());
		}

		Function function = (Function) functionsym.getKind();
		if (baseExp.getExps() == null
				&& function.getArgumentsType().size() != 0) {
			throw new RuntimeException("Argument mismatched for "
					+ function.getName() + ".\nReceived "
					+ function.getArgumentsType().size() + " arguments");
		}
		List<PExp> list = getExpList(baseExp.getExps());
		//TODO NEED TO FIX
//		if (list.size() != function.getArgumentsType().size()) {
//			throw new RuntimeException("Argument mismatched for "
//					+ function.getName() + ".\nReceived "
//					+ function.getArgumentsType().size() + " arguments");
//		}

		for (PExp exp : list) {
			SymbolTable child = new SymbolTable();
			child.scopeSymbolTable(table);
			buildExpSymbolTable(child, exp, display);
		}
	}

	private static List<PExp> getExpList(PExps exps) {
		List<PExp> list = new ArrayList<PExp>();
		getExpList(exps, list);
		return list;
	}

	private static void getExpList(PExps exps, List<PExp> list) {
		if (exps instanceof AOneExps) {
			list.add(((AOneExps) exps).getExp());
		} else if (exps instanceof AManyExps) {
			getExpList(((AManyExps) exps).getExps(), list);
			list.add(((AManyExps) exps).getExp());
		}
	}

	private static void checkATupleBaseExpSymbolTable(SymbolTable table,
			ATupleBaseExp baseExp, Boolean display) {
		List<PFieldvalue> list = getFieldvalueList(baseExp.getFieldvalues());
		SymbolTable child = new SymbolTable();
		for (PFieldvalue field : list) {
			child.scopeSymbolTable(table);
			buildFieldvalueSymbolTable(child, (AFieldvalue) field, display);
		}
	}

	private static void buildFieldvalueSymbolTable(SymbolTable table,
			AFieldvalue field, Boolean display) {
		Local local = new Local();
		local.setName(field.getIdentifier().toString());
		table.putSymbol(local.getName(), local);
		if (display) {
			System.out.print(local.toString());
		}
		buildExpSymbolTable(table, field.getExp(), display);

	}

	private static List<PFieldvalue> getFieldvalueList(PFieldvalues exps) {
		List<PFieldvalue> list = new ArrayList<PFieldvalue>();
		getFieldvalueList(exps, list);
		return list;
	}

	private static void getFieldvalueList(PFieldvalues exps,
			List<PFieldvalue> list) {
		if (exps instanceof AOneFieldvalues) {
			list.add(((AOneFieldvalues) exps).getFieldvalue());
		} else if (exps instanceof AManyFieldvalues) {
			getFieldvalueList(((AManyFieldvalues) exps).getFieldvalues(), list);
			list.add(((AManyFieldvalues) exps).getFieldvalue());
		}
	}

	// For analysis check
	public static void checkLvalueSymbolTable(SymbolTable table,
			PLvalue lvalue, Boolean display) {
		if (lvalue instanceof ASimpleLvalue) {
			if (table.getSymbol(((ASimpleLvalue) lvalue).getIdentifier()
					.toString(), Variable.class) == null) {
				throw new RuntimeException("Failed to find variable "
						+ ((ASimpleLvalue) lvalue).getIdentifier().toString());
			}
		} else if (lvalue instanceof AQualifiedLvalue) {
			final String left = ((AQualifiedLvalue) lvalue).getLeft()
					.toString();
			Symbol symbol = table.getSymbol(left, Variable.class);
			if (symbol == null) {
				throw new RuntimeException("Failed to find variable " + left);
			}
			final String right = ((AQualifiedLvalue) lvalue).getRight()
					.toString();
			Symbol schemaSymbol = table.getSymbol(
					((Variable) symbol.getKind()).getType(), Schema.class);
			Schema schema = (Schema) schemaSymbol.getKind();
			Boolean failed = true;

			for (Field field : schema.getFields()) {
				if (field.getName().contentEquals(right)) {
					failed = false;
				}
			}

			if (failed) {
				throw new RuntimeException(
						"Failed to find the proper value for " + left + "."
								+ right);
			}
		}

	}
}
