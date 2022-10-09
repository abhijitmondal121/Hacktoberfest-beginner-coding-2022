
//Sort a given set of n integer elements using Quick Sort method and compute its time complexity.


import java.util.Scanner;
import java.util.Arrays;
import java.util.Random;

public class QuickSortComplexity
{
    static final int MAX = 10005;
    static int[] a = new int[MAX];

  public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Max array size: ");
        long n = input.nextInt();
        Random random = new Random();
        System.out.println("Enter the array elements: ");
        for (int i = 0; i < n; i++)
        {
            a[i] = random.nextInt(1000); 
        }                                         
        a = Arrays.copyOf(a, n);                           
        System.out.println("Input Array:");
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        long startTime = System.nanoTime();
        QuickSortAlgo(0, n - 1);
        long stopTime = System.nanoTime();
        long elapsedTime = stopTime - startTime;
        System.out.println("\nSorted Array:");
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
        System.out.println("Time Complexity in ms for n=" + n + " is: " +
                           (double)elapsedTime / 1000000);
    }

  public static void QuickSortAlgo(int f, int l)
    {
        int i, j, temp, ele;
        if (f < l)
        {
            i = f;
            j = l + 1;
            ele = a[f];
            while (true)
            {
                i++;
                while (a[i] < ele && i < l)
                    i++;
                j--;
                while (a[j] > ele)
                    j--;
                if (i < j)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                else
                    break;
            }
            a[f] = a[j];
            a[j] = ele;
            QuickSortAlgo(f, j - 1);
            QuickSortAlgo(j + 1, l);
        }
    }
}
