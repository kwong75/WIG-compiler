package wig.compiler.ast.stm;

import java.util.ArrayList;
import java.util.List;

import wig.compiler.ast.variable.VariableNode;

public class CompoundStm implements StmNode {
	private List<VariableNode> variables = new ArrayList<VariableNode>();
	private List<StmNode> stms = new ArrayList<StmNode>();

	public void addVariable(VariableNode variable) {
		variables.add(variable);
	}

	public List<VariableNode> getVariables() {
		return variables;
	}

	public void addStm(StmNode stm) {
		stms.add(stm);
	}

	public List<StmNode> getStms() {
		return stms;
	}

	@Override
	public String toString() {
		String returnValue = "{\n";
		for (final VariableNode variable: variables) {
			returnValue = returnValue + variable.toString();
		}
		for (final StmNode stm : stms) {
			returnValue = returnValue + stm.toString();
		}
		returnValue = returnValue + "}\n";
		return returnValue;
	}
	
}
