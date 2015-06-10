package bigO05;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		while(t-->0){
			int n=Integer.parseInt(br.readLine());
			String sar[]=br.readLine().split(" ");
			BigInteger ans=new BigInteger(""+1);
			for(int i=0;i<n;i++){
				ans=ans.multiply(new BigInteger(sar[i]));
			}
			ans=ans.mod(new BigInteger(""+1000000007));
			out.println(ans);
		}
		out.close();
	}
}
