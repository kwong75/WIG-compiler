package wig.compiler.ast.exp.value;

public class IntegerValue extends PrimitiveValue {
	private int value;

	public void setValue(final String value) {
		this.value = Integer.getInteger(value);
	}

	public int getValue() {
		return value;
	}
	
	@Override
	public String toString() {
		return String.valueOf(value);
	}
}
