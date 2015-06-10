package fombro;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s,sar[];
		int n,m,q,r;
		while(t-->0){
			s=br.readLine();
			sar=s.split(" ");
			n=Integer.parseInt(sar[0]);
			m=Integer.parseInt(sar[1]);
			q=Integer.parseInt(sar[2]);
			BigInteger M=new BigInteger(""+m);
			while(q-->0){
				r=Integer.parseInt(br.readLine());
				BigInteger ans=f(n);
				//out.println(ans);
				
				ans=ans.divide(f(r));
				//out.println(ans);
				ans=ans.divide(f(n-r));
				//out.println(ans);
				ans=ans.mod(M);
				out.println(ans);
				
			}
		}
		out.close();
	}

	private static BigInteger f(int n) {
		BigInteger ret=new BigInteger(""+1);
		for(int i=1;i<=n;i++){
			BigInteger mult=((new BigInteger(""+i)).pow(n-i+1));
			ret=ret.multiply(mult);
			//System.out.println(i+": ");
			//System.out.println(ret);
		}
		return ret;
	}

}
