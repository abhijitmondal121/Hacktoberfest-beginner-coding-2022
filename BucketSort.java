import java.util.*;

import java.util.Collections;

 

class BucketSort {

 

    static void bucketSort(float arr[], int n)

    {

        if (n <= 0)

            return;

 

        Vector<Float>[] buckets = new Vector[n];

 

        for (int i = 0; i < n; i++) {

            buckets[i] = new Vector<Float>();

        }

 

        // Put array elements in different buckets

        for (int i = 0; i < n; i++) {

            float idx = arr[i] * n;

            buckets[(int)idx].add(arr[i]);

        }

 

        // Sort individual buckets

        for (int i = 0; i < n; i++) {

            Collections.sort(buckets[i]);

        }

 

        // Concatenate all buckets

        int index = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < buckets[i].size(); j++) {

                arr[index++] = buckets[i].get(j);

            }

        }

    }

 

    public static void main(String args[])

    {

        float arr[] = { (float)0.89, (float)0.55,

                        (float)0.65, (float)0.124,

                        (float)0.66, (float)0.34 };

 

        int n = arr.length;

        bucketSort(arr, n);

 

        System.out.println("Sorted array is ");

        for (float el : arr) {

            System.out.print(el + " ");

        }

    }

}
