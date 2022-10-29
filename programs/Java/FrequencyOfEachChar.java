import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class FrequencyOfEachChar {
    
    static String frequency(String str){
        int freq[] =new int[26];
        for(int i=0;i<str.length();i++){
            freq[str.charAt(i)-'a']++;

        }

       StringBuilder temp = new StringBuilder();
       for(int i=0;i<26;i++){
        if(freq[i]>0){
            temp.append((char)('a'+i));
            temp.append(freq[i]);
        }
       }
       return String.valueOf(temp);
    }
    public static void main(String[] args)throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String str= bf.readLine();
       System.out.println(frequency(str));
    }
}
