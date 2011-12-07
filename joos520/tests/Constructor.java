import joos.lib.*;

public class Constructor {

	protected int x;
	protected int y;
	protected Constructor construct;
	//Stack limit for this method is 3 
    public Constructor(int x1, int x2, Constructor construct1) { super();
		// Load x1, dup, load x (Stack limit reaches 3)
		// PutField (pops 2), pop the dup (Stack limit reaches 0) 
		x=x1;
		// Load x1, dup, load x (Stack limit reaches 3)
		// PutField (pops 2), pop the dup (Stack limit reaches 0)
		y=x2;	
		// Load x1, dup, load x (Stack limit reaches 3)
		// PutField (pops 2), pop the dup (Stack limit reaches 0)	
		construct=construct1;
	}


	// Stack limit for this method is 5 
    public static void main (String[] args){
	Constructor c;
	// new, dup , creates 0, creates 0, creates null (Stack limit reaches 5)
	// invokenonvirtual removes the ref and 3 args (Stack limit reaches 1)
	// dup the result, store and pop the dup (Stack limit reaches 0)
	c = new Constructor(0,0,null);
    }
}
