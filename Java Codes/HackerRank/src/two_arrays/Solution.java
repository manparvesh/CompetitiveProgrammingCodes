package two_arrays;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,k;
		int t=Integer.parseInt(br.readLine());
		String sar[];
		while(t-->0){
			sar=br.readLine().split(" ");
			n=Integer.parseInt(sar[0]);
			k=Integer.parseInt(sar[1]);
			sar=br.readLine().split(" ");
			int a[]=new int[n];
			for(int i=0;i<n;i++){
				a[i]=Integer.parseInt(sar[i]);
			}
			Arrays.sort(a);
			
			sar=br.readLine().split(" ");
			int b[]=new int[n];
			for(int i=0;i<n;i++){
				b[i]=Integer.parseInt(sar[i]);
			}
			Arrays.sort(b);
			
			boolean ans=true;

			for(int i=0;i<n;i++){
				if(a[i]+b[n-i-1] <k){
					ans=false;
//					out.println(a[i]+b[i] + " " + k);
					break;
				}
			}
			if(ans){
				out.println("YES");
			}else{
				out.println("NO");
			}
			
		}
		out.close();
	}
}