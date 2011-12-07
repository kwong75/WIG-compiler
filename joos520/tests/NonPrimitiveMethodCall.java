import joos.lib.*;

public class NonPrimitiveMethodCall {

	protected int x;
    public NonPrimitiveMethodCall(int x1) { super(); x=x1;}
    public void tryToRaiseStack(int a, NonPrimitiveMethodCall v,NonPrimitiveMethodCall v2, int i,int z) {
		
	}


	//Highest stack total for this was manually counted to 6
    public static void main (String[] args){
      boolean trueV;
	NonPrimitiveMethodCall lc;
	//Creates a new, duplicates it, creates the constant 1 (stack raises to 3),
	// On invokenonvirtual removes the ref and the 1 args (stack drops to 1)
	// It duplicates the result, stores the result, and pop the duplication (stack drops to 0)
	lc = new NonPrimitiveMethodCall(1);
	// Loads lc 3 times and create 3 const (stack raises to 6),
	// On invokevirtual the ref and the 5 args (stack drops to 0)
	lc.tryToRaiseStack(1,lc,lc,1,1);
    }
}
