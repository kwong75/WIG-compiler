import joos.lib.*;

public class TestMultiLineComment {
	//Stack limit for this method is 1    
	public TestMultiLineComment() { super() ;}
    
	//Stack limit for this method is 2
    public static void main (String[] args){
      int a ;
	  //Creates constant 3, duplicates (Stack reaches a limit of 2) than
	  // assigns the duplication and pops the constant 3 from the stack
      a = 3 ;
    }
}
