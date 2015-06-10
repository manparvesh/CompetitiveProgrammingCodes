package rectangular_game;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int a[]=new int[t],b[]=new int[t];
		String sar[];
		int am=1234567,bm=1234567;
		for(int i=0;i<t;i++){
			sar=br.readLine().split(" ");
			a[i]=Integer.parseInt(sar[0]);
			am=(am<a[i]?am:a[i]);
			b[i]=Integer.parseInt(sar[1]);
			bm=(bm<b[i]?bm:b[i]);
		}
		BigInteger ans=new BigInteger(""+am);
		ans=ans.multiply(new BigInteger(""+bm));
		out.println(ans);
		out.close();
	}
}