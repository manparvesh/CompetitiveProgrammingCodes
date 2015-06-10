package sherlock_and_array;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {
	static int ar[]=new int[123456];
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t,n;
		String s;
		s=br.readLine();
		t=Integer.parseInt(s);
		while(t-->0){
			s=br.readLine();
			n=Integer.parseInt(s);
			s=br.readLine();
			String sar[];
			sar=s.split(" ");
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
			}
			boolean ans=false;
			for(int i=1;i<n-1;i++){
				out.println(sum(0,i-1)+" =? "+ sum(i+1,n-1));
				if(sum(0,i-1)==sum(i+1,n-1)){
					ans=true;
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
	private static Object sum(int i, int j) {
		int sum=0;
		for(int a=i;a<=j;a++){
			sum+=ar[a];
		}
		return sum;
	}
}
