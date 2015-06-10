package cut_the_sticks;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s;
		s=br.readLine();
		int n;
		n=Integer.parseInt(s);
		int ar[]=new int[n];
		String sar[];
		s=br.readLine();
		sar=s.split(" ");
		for(int i=0;i<n;i++){
			ar[i]=Integer.parseInt(sar[i]);
		}
		Arrays.sort(ar);
		while(true){
			int nonz=0;
			for(int i=n-1;i>=0;i--){
				if(ar[i]!=0){
					nonz++;
				}else{
					break;
				}
			}
			if(nonz==0){
				break;
			}else{
				out.println(nonz);
			}
			int min=ar[n-1];
			for(int i=n-1;i>=0;i--){
				  if(ar[i]!=0){
					  min=(min<ar[i]?min:ar[i]);
				  }else{
					  break;
				  }
			}
			for(int i=n-1;i>=0;i--){
				if(ar[i]!=0){
					ar[i]-=min;
				}else{
					break;
				}
			}
		}
		out.close();
	}

}
