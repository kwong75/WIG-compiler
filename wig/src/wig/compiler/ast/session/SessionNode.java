package wig.compiler.ast.session;

public class SessionNode {
	private String identifier;
	
	public void setIdentifier(String identifier) {
		this.identifier = identifier;
	}

	public String getIdentifier() {
		return identifier;
	}
	
	@Override
	public String toString() {
		String returnValue = "session " + identifier + " ()\n";
		
		return returnValue;
	}
}
