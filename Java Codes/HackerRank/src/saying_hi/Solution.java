package saying_hi;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s,a;
		while(t-->0){
			s=br.readLine();
			a=s.toLowerCase();
			if(a.startsWith("hi ") && a.charAt(3)!='d'){
				out.println(s);
			}
		}
		out.close();
	}

}
