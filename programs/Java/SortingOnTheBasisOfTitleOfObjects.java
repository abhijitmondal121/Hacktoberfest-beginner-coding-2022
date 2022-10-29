import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Blog {
    private String title;
    private String date;
    Blog(String title, String date){
        this.title=title;
        this.date= date;
    }
    public void setTitle(String title){
        this.title=title;
    }
    public void setDate(String date){
        this.date = date;
    }
    public String getTitle(){
        return this.title;
    }
    public String getDate(){
        return this.getDate();
    }
}


public class SortingOnTheBasisOfTitleOfObjects {
    public static void main(String[] args) throws IOException{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bf.readLine());
        ArrayList<Blog> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            System.out.print("Enter title:");
            String title = bf.readLine();
            // System.out.print("Enter date:-");
            
            // String date = sc.nextLine();
            arr.add(new Blog(title,"title"));
        }

        System.out.println("Before :");
        for(Blog blod : arr){
            System.out.println(blod.getTitle());
        }
        //here using Collection sort function to sort object
        Collections.sort(arr,new Comparator<Blog>(){
            @Override
            public int compare(Blog o1, Blog o2) {
               
                return o1.getTitle().compareTo(o2.getTitle());
            }
        });
        System.out.println("after :");
        for(Blog blod : arr){
            System.out.println(blod.getTitle());
        }
    }
}
