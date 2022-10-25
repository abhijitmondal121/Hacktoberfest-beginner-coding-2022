package SamplePgms;
import java.util.*;
public class TransposeOfMatrix {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int m,n;
		Scanner obj =new Scanner(System.in);
		System.out.println("enter the no.of rows of matrix A:");
	    m=obj.nextInt();
	    System.out.println("enter the no.of columns of matrix A:");
	    n=obj.nextInt(); 
	    int a[][]=new int[m][n];
	    System.out.println("ENTER MATRIX A:\n\t");
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	           a[i][j]=obj.nextInt();
	    int t[][]=new int[m][n];
	     for(int i=0;i<m;i++)
	       for(int j=0;j<n;j++)
	       t[i][j]=a[j][i];
	     System.out.println("Transpose:");
	     for(int i=0;i<m;i++)
	     {
	       for(int j=0;j<n;j++)
	    	   System.out.print(" "+t[i][j]);
	       System.out.print("\n");
	     }  }}
