package shrlock_and_counting;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int n,k;
		String sar[];
		while(t-->0){
			sar=br.readLine().split(" ");
			n=Integer.parseInt(sar[0]);
			k=Integer.parseInt(sar[1]);
			int ans=0;
			if(n%2==0){
				int l=(n-1)/2;
				for(int i=1;i<=l;i++){
					if((i*(n-i))<=n*k){
						ans+=2;
					}else{
						break;
					}
				}
				l++;
				if(l*(n-l)<=n*k){
					ans++;
				}
				out.println(ans);
			}else{
				int l=(n-1)/2;
				for(int i=1;i<=l;i++){
					if((i*(n-i))<=n*k){
						ans+=2;
					}else{
						break;
					}
				}
				out.println(ans);
			}
		}
		out.close();
	}
}