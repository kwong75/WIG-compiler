package wig.compiler.typecheck;

import wig.node.Node;

public interface TypeRule {

	/** 
	 * The rule to be implemented and checked
	 * @param node The node it is suppose to check upon
	 * @return
	 */
	public boolean checkExp(Node node);
	
}
