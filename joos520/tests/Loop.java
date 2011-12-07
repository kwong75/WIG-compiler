import joos.lib.*;

public class Loop {
	//Stack limit for this method is 1
    public Loop() { super() ;}
    
	//Stack limit for this method is 2
    public static void main (String[] args){
		int i;
		// Creates 0, dup (Stack limit reaches 2)
		// Store, pop the dup (Stack limit reaches 0)
		i = 0;
		// load i, creates 3 (Stack limit reaches 2)
		// ificmplt pop the 2	(Stack limit reaches 0)
		while(i < 3) {
			//load i, load const (Stack limit reaches 2)
			// pop 2 and add them (Stack limit reaches 1)
			// dup the result, store, and pop the dup (Stack limit reaches 0)
			i++;
		};
    }
}
