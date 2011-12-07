package wig.compiler.symbolkind;

import java.util.ArrayList;
import java.util.List;

import wig.compiler.symbol.SymbolTable;
import wig.util.SimpleType;

public class Function extends SymbolKind {
	private String name;
	private String type;
	private List<String> argumentsType = new ArrayList<String>();

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getType() {
		return type;
	}

	public void setType(SymbolTable table , String type) {
		if (SimpleType.isSimpleType(type)) {
			this.type = type;
			return;
		}
		if (table.getSymbol(type) != null) {
			this.type = type;
			return;
		}
		throw new RuntimeException("Failed to find type " + type);
	}
	
	public List<String> getArgumentsType() {
		return argumentsType;
	}
	
	public void addArgumentType(final SymbolTable table, final String type) {
		if (SimpleType.isSimpleType(type)) {
			argumentsType.add(type);
			return;
		}
		if (table.getSymbol(type) != null) {
			argumentsType.add(type);
			return;
		}
		throw new RuntimeException("Failed to find type " + type);
	}
	
	public String toString() {
		return "Function: name = " + name + " type = " + type;
	}

}
