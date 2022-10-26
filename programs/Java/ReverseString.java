package SamplePgms;
import java.util.Scanner;
public class ReverseString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String ch;int c;
		Scanner obj=new Scanner(System.in);
	    System.out.println("ENTER A WORD:");
	    ch=obj.next();
	    c=ch.length();
	    System.out.println("reversed string:");
	    for(int i=c-1;i>=0;i--)
	   System.out.print(ch.charAt(i));
	    
	}

}
