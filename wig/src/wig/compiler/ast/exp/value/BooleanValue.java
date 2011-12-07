package wig.compiler.ast.exp.value;

public class BooleanValue extends PrimitiveValue {
	private String value;
	public enum BOOLEANVALUE {TRUE, FALSE};
	
	public void setValue(BOOLEANVALUE value) {
		switch(value) {
			case TRUE: this.value = "true";break;
			case FALSE: this.value = "false";break;
			default: throw new RuntimeException();
		}
	}
	
	public String getValue() {
		return value;
	}
	
	@Override
	public String toString() {
		return value;
	}
}
