package find_hackerrank;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		while(t-->0){
			s=br.readLine();
			if(s.startsWith("hackerrank") && s.endsWith("hackerrank")){
				out.println(0);
			}else if(s.startsWith("hackerrank")){
				out.println(1);
			}else if(s.endsWith("hackerrank")){
				out.println(2);
			}else{
				out.println(-1);
			}
		}
		out.close();
	}

}
