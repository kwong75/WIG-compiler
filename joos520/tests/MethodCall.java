import joos.lib.*;

public class MethodCall {

	protected int x;
	//Stack limit for this method is 3 
    public MethodCall(int x1) { super();
	// Load x1, dup, load x (Stack limit reaches 3)
	// PutField (pops 2), pop the dup (Stack limit reaches 0) 
	 x=x1;
	}

	//Stack limit for this method is 1 
    public int tryToRaiseStack(int i, int x) {
		// load i (Stack limit reaches 1)
		return i;
	}


	//Stack limit for this method is 3 
    public static void main (String[] args){
      boolean trueV;
	MethodCall lc;
	// new, dup , creates 10 (Stack limit reaches 3)
	// invokenonvirtual removes the ref and 1 args (Stack limit reaches 1)
	// dup the result, store and pop the dup (Stack limit reaches 0)
	lc = new MethodCall(10);
	
	// load lc, creates 0, creates 1 (Stack limit reaches 3)
	// invokevirtual removes the ref and 2 args, but push 1 return(Stack limit reaches 1)
	// pop the return (Stack limit reaches 0)
	lc.tryToRaiseStack(0,1);
	// load lc, creates 0, creates 1 (Stack limit reaches 3)
	// invokevirtual removes the ref and 2 args, but push 1 return(Stack limit reaches 1)
	// pop the return (Stack limit reaches 0)
	lc.tryToRaiseStack(0,1);
    }
}
