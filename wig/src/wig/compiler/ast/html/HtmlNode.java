package wig.compiler.ast.html;

import java.util.ArrayList;
import java.util.List;

public class HtmlNode {
	private String identifier;
	private List<HtmlBodyNode> nodes = new ArrayList<HtmlBodyNode>();

	public String getIdentifier() {
		return identifier;
	}

	public void setIdentifier(String identifier) {
		this.identifier = identifier;
	}

	public List<HtmlBodyNode> getNodes() {
		return nodes;
	}

	public void addNode(final HtmlBodyNode node) {
		nodes.add(node);
	}

	@Override
	public String toString() {
		String returnValue = "const html " + identifier + " = <html> \n";
		for (final HtmlBodyNode node : nodes) {
			returnValue = returnValue + node.toString() + "\n";
		}
		return returnValue + "</html>;";
	}
}
