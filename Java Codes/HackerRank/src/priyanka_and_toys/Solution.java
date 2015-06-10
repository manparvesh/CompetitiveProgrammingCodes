package priyanka_and_toys;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,k;
		String sar[];
		//while(t-->0){
			n=Integer.parseInt(br.readLine());
			sar=br.readLine().split(" ");
			int ar[]=new int[n];
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
			}
			Arrays.sort(ar);
			int w=ar[0],ans=1;
			for(int i=0;i<n;i++){
				if(ar[i]>w+4){
					w=ar[i];ans++;
				}
			}
			out.println(ans);
		//}
		out.close();
	}
}