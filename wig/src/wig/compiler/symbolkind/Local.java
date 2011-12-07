package wig.compiler.symbolkind;

public class Local extends SymbolKind {
	private String name;

	public void setName(String name) {
		this.name = name;
	}

	public String getName() {
		return name;
	}
	
	public String toString() {
		return "Local: name = " + name + "\n";
	}
}
