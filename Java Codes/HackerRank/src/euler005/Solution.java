package euler005;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,t=Integer.parseInt(br.readLine());
		int a;
		while(t-->0){
			a=1;
			BigInteger ans=new BigInteger(""+1);
			n=Integer.parseInt(br.readLine());
			boolean chk[]=new boolean[n+1];
			for(int i=2;i<=n;i++){
				a=lcm(i,a);
			}
			out.println(a);
		}
		out.close();
	}
	
	static int lcm(int x, int y)
    {
        int a;
        a = (x > y) ? x : y; // a is greater number
        while(true)
        {
            if(a % x == 0 && a % y == 0)
                return a;
            ++a;
        }	
    }
}