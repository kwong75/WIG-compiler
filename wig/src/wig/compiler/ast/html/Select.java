package wig.compiler.ast.html;

import java.util.List;

public class Select implements HtmlBodyNode {
	private String inputType;
	private enum TYPE {RADIO, TEXT};
	private List<Attribute> attributes;
	private List<HtmlBodyNode> bodynodes;
	
	public void setType(TYPE type) {
		switch (type) {
			case RADIO: inputType = "radio"; break;
			case TEXT: inputType = "text"; break;
			default : throw new RuntimeException("Select.java input type does not exist: " + type);
		}
	}
	
	public TYPE getType(final String type) {
		if (type.contentEquals("radio")) {
			return TYPE.RADIO;
		}
		else if (type.contentEquals("text")) {
			return TYPE.TEXT;
		}
		return null;
	}
	
	public String getInputType() {
		return inputType;
	}
	
	public String getName() {
		for (Attribute attribute : attributes) {
			if (attribute.getLeft().contentEquals("name")
					|| attribute.getLeft().contentEquals("\"name\"")) {
				return attribute.getRight();
			}
		}
		return null;
	}
	
	public List<Attribute> getAttributes() {
		return attributes;
	}
	
	public void addAttribute(final Attribute node) {
		attributes.add(node);
	}

	public List<HtmlBodyNode> getNodes() {
		return bodynodes;
	}
	
	public void addNode(final HtmlBodyNode node) {
		bodynodes.add(node);
	}
	
	@Override
	public String toString() {
		String returnValue = "<select";
		returnValue = returnValue + "type = " + getInputType();
		for (Attribute attribute : attributes) {
			returnValue = returnValue + " " + attribute.toString();
		}
		returnValue = returnValue + ">";
		for (final HtmlBodyNode nodes : bodynodes) {
			returnValue = returnValue + nodes.toString() + "\n";
		}
		return returnValue + "</select>";
	}
}
