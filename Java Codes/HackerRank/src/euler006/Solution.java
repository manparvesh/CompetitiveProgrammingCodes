package euler006;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,t=Integer.parseInt(br.readLine());
		while(t-->0){
			n=Integer.parseInt(br.readLine());
			out.println(s2(n).subtract(s1(n)));
		}
		out.close();
	}

	private static BigInteger s1(int n) {
		BigInteger b=new BigInteger(""+0);
		for(int i=1;i<=n;i++){
			b=b.add(new BigInteger(""+i*i));
		}
		return b;
	}

	private static BigInteger s2(int n) {
		n=(n*(n+1)/2);
		BigInteger b=new BigInteger(""+n);
		b=b.multiply(b);
		return b;
	}

}