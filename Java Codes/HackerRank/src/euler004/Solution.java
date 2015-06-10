package euler004;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,t=Integer.parseInt(br.readLine());
		while(t-->0){
			n=Integer.parseInt(br.readLine());
			for(int i=n-1;i>100000;i--){
				if(isPali(i)){
					out.println(i);break;
				}
			}
		}
		out.close();
	}

	private static boolean isPali(int n) {
		String s=""+n,rev="";
		for(int i=s.length()-1;i>=0;i--){
			rev+=s.charAt(i);
		}
		if(s.equals(rev)){
			return true;
		}
		return false;
	}
}
