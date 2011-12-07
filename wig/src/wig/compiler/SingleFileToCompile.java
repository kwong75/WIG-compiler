package wig.compiler;

import java.io.File;
import java.io.FileReader;
import java.io.PushbackReader;
import java.io.StringReader;

import wig.command.Switch;
import wig.compiler.symbol.SymbolTable;
import wig.lexer.Lexer;
import wig.lexer.LexerException;
import wig.node.Start;
import wig.parser.Parser;
import wig.parser.ParserException;

public class SingleFileToCompile {
	private Switch switches;
	private File file;
	private String prettyprint;
	private SymbolTable symbolTable;

	public SingleFileToCompile(final Switch switches, final File file) {
		this.switches = switches;
		this.file = file;
	}

	public void run() {
		try {
			FileReader fileReader = new FileReader(file);
			Parser p = new Parser(new Lexer(new PushbackReader(fileReader, 1024)));
			Start tree = p.parse();
			System.out.println("Parse successful for " + file.toString());

			prettyprint = PrettyPrinter.print(tree);

			/* Pretty Print */
			if (!switches.getNoOutput()) {
				output();
			}

			/* Repeat twice test */
			if (switches.getRepeatTest()) {
				repeatTest();
			}
			
			//TODO: Symbol!!!
			if (!switches.getNoSymbol()) {
				symbolTable = BuildSymbolTable.run(tree,true);
			}
			/* Exception handling */
		} catch (Exception e) {
			handleException(e);
		}
	}

	private void handleException(Exception e) {
		if (e instanceof LexerException) {
			System.out.println("For file " + file.toString()
					+ " received Lexer Error");
			if (!switches.getSuppressError()) {
				e.printStackTrace();
			}
		} else if (e instanceof ParserException) {
			System.out.println("For file " + file.toString()
					+ " received Parse Error");
			if (!switches.getSuppressError()) {
				e.printStackTrace();
			}
		} else {
			e.printStackTrace();
		}

	}

	private void output() {
		System.out.println("Pretty printing: ");
		System.out.println(prettyprint);
	}

	private void repeatTest() throws Exception {
		StringReader read = new StringReader(prettyprint);
		Parser p2 = new Parser(new Lexer(new PushbackReader(read, 1024)));
		String string2;
		try {
			string2 = PrettyPrinter.print((Start) p2.parse());
		} catch (Exception e) {
			throw e;
		}

		// White space does not clean
		if (clearWhiteSpace(prettyprint).equals(clearWhiteSpace(string2))) {
			System.out
					.println("The result of parsing and prettyprinting twice is true for "
							+ file.toString());
		} else {
			System.out.println(string2);
		}
	}

	private static String clearWhiteSpace(String clean) {
		String returnValue = clean.replaceAll(" ", "");
		return returnValue;
	}
}
