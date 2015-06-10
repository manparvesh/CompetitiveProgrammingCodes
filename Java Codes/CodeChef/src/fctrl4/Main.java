package fctrl4;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args)throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s;
		while((s=br.readLine())!=null && s.length()!=0){
			BigInteger a=new BigInteger(s);
			String str=fact(a).toString();
			for(int i=str.length()-1;i>=0;i--){
				if(s.charAt(i)!='0'){
					out.println(s.charAt(i));
					break;
				}
			}
		}
		out.close();
	}
	
	private static BigInteger fact(BigInteger n){
		BigInteger bi=new BigInteger (""+n); 
		if(n.equals(new BigInteger(""+0))) return new BigInteger("1");
		return bi.multiply(fact(n.subtract(new BigInteger(""+1))));
	}
	
}
