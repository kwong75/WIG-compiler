package wig.compiler.ast.html;

import java.util.ArrayList;
import java.util.List;

public class Input implements HtmlBodyNode {
	private List<Attribute> attributes = new ArrayList<Attribute>();
	private String inputType;
	private enum TYPE {RADIO, TEXT};
	
	public List<Attribute> getAttributes() {
		return attributes;
	}
	
	public void addAttribute(final Attribute node) {
		attributes.add(node);
	}
	
	public void setInputType(TYPE type) {
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
		throw new RuntimeException("Select.java input type does not exist: " + type);
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

	public String getInputType() {
		return inputType;
	}
	
	@Override
	public String toString() {
		String returnValue = "<input";
		returnValue = returnValue + "type = " + getInputType();
		for (Attribute attribute : attributes) {
			returnValue = returnValue + " " + attribute.toString();
		}
		return returnValue + ">";
	}
}
