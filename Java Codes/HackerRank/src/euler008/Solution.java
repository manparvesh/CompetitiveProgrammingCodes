package euler008;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,k,t=Integer.parseInt(br.readLine());
		String sar[],s1[];
		while(t-->0){
			s1=br.readLine().split(" ");
			n=Integer.parseInt(s1[0]);
			k=Integer.parseInt(s1[1]);
			int ar[]=new int[n];
			sar=br.readLine().split("");
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
			}
			int ans=0,max;
			for(int i=0;i<n-1-k;i++){
				max=1;
				for(int j=i;j<i+k;j++){
					max*=ar[j];
				}
				ans=(ans>max?ans:max);
			}
			out.println(ans);
		}
		out.close();
	}

}
