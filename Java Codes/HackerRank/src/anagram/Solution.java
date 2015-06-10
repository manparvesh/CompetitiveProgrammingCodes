package anagram;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s;int t;
		s=br.readLine();
		int a1[]=new int[26],a2[]=new int[26];
		t=Integer.parseInt(s);
		while(t-->0){
			s=br.readLine();
			if(s.length()%2==1){
				out.println("-1");
			}else{
				Arrays.fill(a1, 0);
				Arrays.fill(a2, 0);
				for(int i=0;i<(s.length()/2);i++){
					a1[(int)(s.charAt(i)-'a')]++;
				}
				for(int i=(s.length()/2);i<s.length();i++){
					a2[(int)(s.charAt(i)-'a')]++;
				}
				int ans=0;
				for(int i=0;i<26;i++){
					ans+=(Math.abs(a1[i]-a2[i]));
				}
				out.println(ans/2);
			}
		}
		out.close();
	}

}
