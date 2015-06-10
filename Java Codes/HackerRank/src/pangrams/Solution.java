package pangrams;

//import java.util.*;
import java.io.*;
import java.util.Arrays;

class Solution{
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s;
		s=br.readLine();
		s=s.toLowerCase();
		int ar[]=new int[26];
		Arrays.fill(ar, 0);
		boolean ans=true;
		for(int i=0;i<s.length();i++){
			if(s.charAt(i)!=' '){
				ar[(int)(s.charAt(i)-'a')]++;
			}
		}
		for(int i=0;i<26;i++){
			if(ar[i]==0){
				ans=false;
				break;
			}
		}
		if(ans){
			out.println("pangram\n");
		}else{
			out.println("not pangram\n");
		}
		out.close();
	}
}