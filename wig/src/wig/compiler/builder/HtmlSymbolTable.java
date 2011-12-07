package wig.compiler.builder;

import wig.compiler.symbolkind.html.Html;
import wig.compiler.symbolkind.html.HtmlAttr;
import wig.compiler.symbolkind.html.HtmlHole;
import wig.compiler.symbolkind.html.HtmlInput;
import wig.compiler.symbolkind.html.HtmlTag;
import wig.node.AAssignAttribute;
import wig.node.AAttrAttribute;
import wig.node.AAttributeInputattr;
import wig.node.AHoleHtmlbody;
import wig.node.AHtml;
import wig.node.AInputHtmlbody;
import wig.node.ANameInputattr;
import wig.node.ASelectHtmlbody;
import wig.node.ATagEndHtmlbody;
import wig.node.ATagStartHtmlbody;
import wig.node.ATypeInputattr;
import wig.node.PAttribute;
import wig.node.PHtmlbody;

public class HtmlSymbolTable {
	
	public static Html buildHtmlSymbolKind(final AHtml node) {
		final Html returnValue = new Html();
		returnValue.setName(node.getIdentifier().toString());
		for (final Object body : node.getHtmlbody()) {
			symAHtml(returnValue, (PHtmlbody)body);
		}
		return returnValue;
	}

	private static void symAHtml(final Html returnValue, final PHtmlbody node) {
		if (node instanceof ATagStartHtmlbody) {
			symATagStartHtmlbody(returnValue,(ATagStartHtmlbody)node);
		} else if (node instanceof ATagEndHtmlbody) {
			symATagEndHtmlbody(returnValue,(ATagEndHtmlbody)node);
		} else if (node instanceof AHoleHtmlbody) {
			symAHoleHtmlbody(returnValue,(AHoleHtmlbody)node);
		} else if (node instanceof AInputHtmlbody) {
			symAInputHtmlbody(returnValue,(AInputHtmlbody)node);
		} else if (node instanceof ASelectHtmlbody) {
			symASelectHtmlbody(returnValue,(ASelectHtmlbody)node);
		}
	}

	//TODO Will handle in the future
	private static void symASelectHtmlbody(Html returnValue, ASelectHtmlbody node) {
		// TODO Auto-generated method stub
	}

	private static void symAInputHtmlbody(Html returnValue, AInputHtmlbody node) {
		final HtmlInput htmlInput = new HtmlInput();
		Boolean hasName = false;
		for (Object inputAttr : node.getInputattr()) {
			if (inputAttr instanceof ANameInputattr) {
				hasName = true;
				htmlInput.setName(((ANameInputattr) inputAttr).getAttr().toString());
			}
			else if (inputAttr instanceof ATypeInputattr) {
				htmlInput.setType(((ATypeInputattr) inputAttr).getInputtype().toString());
			}
			else if (inputAttr instanceof AAttributeInputattr) {
				htmlInput.addAttr(symPAttribute(((AAttributeInputattr) inputAttr).getAttribute()));
			}
		}
		// Only adding a receive if it is define
		if (hasName) {
			returnValue.addReceive(htmlInput);
		}
	}

	private static void symAHoleHtmlbody(Html returnValue, AHoleHtmlbody node) {
		final HtmlHole hole = new HtmlHole();
		hole.setName(node.getIdentifier().toString());
		returnValue.addPlug(hole);
	}

	/**
	 * TODO
	 * Suppose to be related to {@link HtmlTag}
	 * @param returnValue
	 * @param node
	 */
	private static void symATagEndHtmlbody(Html returnValue, ATagEndHtmlbody node) {
		// TODO Auto-generated method stub
		
	}

	/**
	 * TODO
	 * Suppose to be related to {@link HtmlTag}
	 * @param returnValue
	 * @param node
	 */
	private static void symATagStartHtmlbody(Html returnValue,
			ATagStartHtmlbody node) {
		// TODO Auto-generated method stub
	}
	
	private static HtmlAttr symPAttribute(final PAttribute node) {
		final HtmlAttr htmlAttr = new HtmlAttr();
		if (node instanceof AAttrAttribute) {
			htmlAttr.setRead(((AAttrAttribute) node).getAttr().toString());
		}
		else if (node instanceof AAssignAttribute){
			htmlAttr.setRead(((AAssignAttribute) node).getRightAttr().toString());
			htmlAttr.setWrite(((AAssignAttribute) node).getLeftAttr().toString());
		}
		return htmlAttr;
	}
}
