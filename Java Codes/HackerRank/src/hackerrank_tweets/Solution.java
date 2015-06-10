package hackerrank_tweets;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		int ans=0;
		while(t-->0){
			s=br.readLine();
			s=s.toLowerCase();
			if(s.contains("hackerrank")){
				ans++;
			}
		}
		out.println(ans);
		out.close();
	}

}
