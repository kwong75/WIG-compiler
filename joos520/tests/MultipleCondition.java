import joos.lib.*;

public class MultipleCondition {
	//Stack limit for this method is 1    
	public MultipleCondition() { super() ;}
    
	//Stack limit for this method is 2
    public static void main (String[] args){
      int a ;
      int b ;
      int c ;
      a = 1; 
      b = 2 ;
      if ( a > 3 && b > 3) {
        c = 4 ;
      } else {
        c = 5 ;
      }

    }
}
