import joos.lib.*;

public class Condition {

	protected int x;
	//Stack total for this method is 3 
    public Condition(int x1) { super();
	// Load x1, dup, load x (Stack limit reaches 3)
	// PutField (pops 2), pop the dup (Stack limit reaches 0)
	 x=x1;
	}

	//Stack total for this method is 0
    public void tryToRaiseStack(int i, int x) {
		
	}


	//Stack total for this method is 3 
    public static void main (String[] args){
      boolean trueV;
	Condition lc;
	// Creates true, dup (Stack limit reaches 2)
	// Assign, pop the dup (Stack limit reaches 0)
	trueV = true;
	// new, dup, creates 10 (Stack limit reaches 3)
	// invokenonvirtual removes the ref and 1 args (Stack limit reaches 1)
	// dup the result, store and pop the dup (Stack limit reaches 0)
	lc = new Condition(10);
	
	// This has a branch, it will find the max of the 2 branches and computes that as the stack limit 
	// Creates true (Stack limit reaches 1)
	// ifeq pops one (Stack limit reaches 0)
	if (true) {
		// load lc, creates const 0, creates 1 (Stack limit reaches 3)
		// invokevirtual removes the ref and 2 args (Stack limit reaches 0)
		lc.tryToRaiseStack(0,1);
	} else {
		// new, dup, creates 10 (Stack limit reaches 3)
		// invokenonvirtual removes the ref and 1 args (Stack limit reaches 1)
		// dup the result, store and pop the dup (Stack limit reaches 0)
		lc = new Condition(10);
	}
    }
}
