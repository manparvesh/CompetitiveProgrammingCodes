package cavity_map;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t;
		String s;
		s=br.readLine();
		t=Integer.parseInt(s);
		int n=t;
		while(t-->0){
			s=br.readLine();
			out.print(s.charAt(0));
			for(int i=1;i<n-1;i++){
				if(((int)s.charAt(i)<(int)s.charAt(i-1))
					&& (int)s.charAt(i)<(int)s.charAt(i+1)
					&& (int)s.charAt(i-1)!='X'
					&& (int)s.charAt(i+1)!='X'){
					out.print("X");
				}else{
					out.print(s.charAt(i));
				}
			}
			out.print(s.charAt(n-1));
			out.println();
		}
		out.close();
	}

}
