package paperfolding_sequence;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,t=Integer.parseInt(br.readLine());
		String l,r,ans,l1,r1;
		while(t-->0){
			n=Integer.parseInt(br.readLine());
			l="";r="";ans="";
			for(int i=0;i<n;i++){
				ans=l+"D"+r;
				l1=l;r1=r;
				l=l1+"D"+r1;
				r=l1+"U"+r1;
			}
			if(ans.equals(w(n))){
				out.println("Yay!");
			}else{
				out.println("Nah!");
			}
		}
		out.close();
	}

	private static String w(int n) {
		String ret="";
		int len=(int)Math.pow(2, n)-1;
		for(int i=1;i<=len;i++){
			if(odd(i)%4==1){
				ret+="D";
			}else{
				ret+="U";
			}
		}
		return ret;
	}
	
	private static int odd(int n){
		if(n%2==1){
			return n;
		}else{
			return odd(n/2);
		}
	}
}
