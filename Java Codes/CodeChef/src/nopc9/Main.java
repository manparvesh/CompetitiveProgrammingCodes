package nopc9;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		String s=br.readLine();
		Set<Character> set=new HashSet<Character>();
		int ar[]=new int[26];
		for(int i=0;i<s.length();i++){
			set.add(s.charAt(i));
			ar[(int)(s.charAt(i)-'a')]++;
		}
		Object[] t=set.toArray();
		for(int i=0;i<t.length;i++){
			out.print(t[i]);
		}
		out.close();
	}
}
