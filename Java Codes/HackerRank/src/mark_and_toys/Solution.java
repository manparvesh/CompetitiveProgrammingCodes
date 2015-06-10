package mark_and_toys;

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
			sar=br.readLine().split(" ");
			n=Integer.parseInt(sar[0]);
			k=Integer.parseInt(sar[1]);
			sar=br.readLine().split(" ");
			int ar[]=new int[n];
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
			}
			Arrays.sort(ar);
			int sum=0,count=0;
			for(int i=0;i<n;i++){
				if(sum+ar[i]>k){
					break;
				}else{
					count++;
					sum+=ar[i];
				}
			}
			out.println(count);
		//}
		out.close();
	}
}