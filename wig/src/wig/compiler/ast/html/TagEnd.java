package wig.compiler.ast.html;

public class TagEnd implements HtmlBodyNode {
	private String identifier;

	public String getIdentifier() {
		return identifier;
	}

	public void setIdentifier(String identifier) {
		this.identifier = identifier;
	}

	@Override
	public String toString() {
		return "</" + identifier + ">";
	}
}
