package wig.console;

public enum ConsoleCommand {
	NOOUTPUT,REPEATTEST,NOSYMBOL,HELP,SUPPRESSERROR;
	
	public static ConsoleCommand getCommand(final String args) {
		if (args.equals("--display")) {
			return NOOUTPUT;
		}
		else if (args.equals("-t")) {
			return REPEATTEST;
		}
		else if (args.equals("--s")) {
			return NOSYMBOL;
		}
		else if (args.equals("-e")) {
			return SUPPRESSERROR;
		}
		else return HELP;
	}
	
}
