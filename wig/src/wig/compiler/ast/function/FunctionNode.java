package wig.compiler.ast.function;

import java.util.ArrayList;
import java.util.List;

import wig.compiler.ast.type.Type;

public class FunctionNode {
	private Type type;
	private String identifier;
	private List<Argument> arguments = new ArrayList<Argument>();

	public void setType(Type type) {
		this.type = type;
	}

	public Type getType() {
		return type;
	}

	public void setIdentifier(String identifier) {
		this.identifier = identifier;
	}

	public String getIdentifier() {
		return identifier;
	}

	public void addArgument(Argument argument) {
		this.arguments.add(argument);
	}

	public List<Argument> getArguments() {
		return arguments;
	}

	@Override
	public String toString() {
		 String returnValue = type.toString() + " " + identifier.toString() + " (";
		 
		 for (final Argument argument : arguments) {
			 returnValue = returnValue + argument.toString() + ",";
		 }
		 
		 if (arguments.size() > 0) {
			 returnValue = returnValue.substring(0, returnValue.length() - 1);
		 }
		 
		 returnValue = returnValue + ")\n";
		 return returnValue;
	}

}
