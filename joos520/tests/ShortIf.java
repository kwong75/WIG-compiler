import joos.lib.*;

public class ShortIf {

	protected int x;
	//Stack limit is 3 for this method
    public ShortIf(int x1) { super(); 
	// Load x1, dup, load x (Stack limit reaches 3)
	// PutField (pops 2), pop the dup (Stack limit reaches 0) 
	x=x1;
	}

	//Stack limit is 3 for this method
    public static void main (String[] args){
      boolean trueV;
	ShortIf lc;
	// Creates true, dup (Stack limit reaches 2)
	// Store, pop (Stack limit reaches 0)
	trueV =true;
	// load trueV (Stack limit reaches 1)
	// ifeq pops one (Stack limit reaches 0)
	if (trueV) {
		// new, dup , creates 10 (Stack limit reaches 3)
		// invokenonvirtual removes the ref and 1 args (Stack limit reaches 1)
		// dup the result, store and pop the dup (Stack limit reaches 0)
		lc = new ShortIf(1);
	}
    }
}
