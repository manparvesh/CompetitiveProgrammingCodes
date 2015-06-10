package find_substring;

import java.util.*;
import java.util.regex.*;
import java.io.*;

public class Solution {
    public static void main(String[] args) throws Exception{
        PrintWriter out=new PrintWriter(System.out);
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        //Save all lines
        List<String> lines = new ArrayList<String>();
        for (int N = Integer.parseInt(br.readLine()); N > 0; N--) {
            String line = br.readLine();
            //System.out.println(N);
            lines.add(line);
        }
        
        //Count occurrences of substring
        for (int T = Integer.parseInt(br.readLine()); T > 0; T--) {
            String subword = br.readLine();
            Matcher matcher = Pattern.compile(
                "[a-z0-9_]+"+subword+"[a-z0-9_]+",
                Pattern.CASE_INSENSITIVE
            ).matcher("");
            int count = 0;
            for (String line : lines) {
                matcher.reset(line);
                while (matcher.find()){
                    count++;
                }
            }
            out.println(count);
            
        }
        out.close();
    }
}