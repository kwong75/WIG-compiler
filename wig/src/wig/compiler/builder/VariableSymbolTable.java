package wig.compiler.builder;

import java.util.ArrayList;
import java.util.List;

import wig.compiler.symbol.SymbolTable;
import wig.compiler.symbolkind.Variable;
import wig.node.AManyIdentifiers;
import wig.node.AOneIdentifiers;
import wig.node.ASimpleType;
import wig.node.ATupleType;
import wig.node.AVariable;
import wig.node.PIdentifiers;
import wig.node.PType;

public class VariableSymbolTable {

	public static void buildAndPutVariableSymbolKind(final SymbolTable table,
			final AVariable node,final Boolean display) {
		List<AOneIdentifiers> cNode = handleMultiIdentifiers(node
				.getIdentifiers());
		PType type = node.getType();
		for (AOneIdentifiers oneIdentifier : cNode) {
			final Variable variable = new Variable();
			variable.setName(oneIdentifier.toString());
			if (type instanceof ASimpleType) {
				variable.setType(table, type.toString());
			} else if (type instanceof ATupleType) {
				variable.setType(table, ((ATupleType) type).getIdentifier()
						.toString());
			}
			
			table.putSymbol(variable.getName(), variable);
			if (display)
				System.out.println(variable.toString());
		}
	}

	private static List<AOneIdentifiers> handleMultiIdentifiers(
			PIdentifiers identifiers) {
		List<AOneIdentifiers> list = new ArrayList<AOneIdentifiers>();
		handleMultiIdentifiers(list, identifiers);
		return list;
	}

	private static void handleMultiIdentifiers(List<AOneIdentifiers> list,
			PIdentifiers identifiers) {
		if (identifiers instanceof AOneIdentifiers) {
			list.add((AOneIdentifiers) identifiers);
		} else if (identifiers instanceof AManyIdentifiers) {
			AManyIdentifiers node = (AManyIdentifiers) identifiers;
			AOneIdentifiers newNode = new AOneIdentifiers();
			newNode.setIdentifier(node.getIdentifier());
			list.add(newNode);
			handleMultiIdentifiers(list, node.getIdentifiers());
		}
	}
}
