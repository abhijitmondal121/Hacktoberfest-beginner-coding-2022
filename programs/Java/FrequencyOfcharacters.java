package SamplePgms;
import java.util.*;
public class FrequencyOfcharacters {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner obj=new Scanner(System.in);
    String word;char ch;int l,c=0;
   System.out.println("enter a string:");
   word=obj.nextLine();
   word=word.toLowerCase();
   System.out.println("enter the character whose frequency is to be printed:");
   ch=obj.next().charAt(0);
   l=word.length();
   for(int i=0;i<l;i++)
   {
	   if(ch==word.charAt(i))
		   c++;
   }
   System.out.println("Frequency of the character '"+ch+"':"+c);

}
}
