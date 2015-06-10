package julka;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int t=10;
		BigInteger a,b,n,m;
		//while(t-->0){
			a=new BigInteger(br.readLine());
			b=new BigInteger(br.readLine());
			n=a.add(b);
			n=n.divide(new BigInteger(""+2));
			m=a;
			m=m.subtract(n);
			out.println(n+"\n"+m);
		//}
		out.close();
	}
}
