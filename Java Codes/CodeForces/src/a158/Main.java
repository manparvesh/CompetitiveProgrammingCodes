package a158;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;


public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String sa[]=(br.readLine()).split(" ");
		int n=Integer.parseInt(sa[0]),k=Integer.parseInt(sa[1]);
		int ar[]=new int[n];
		String sar[]=(br.readLine()).split(" ");
		for(int i=0;i<n;i++){
			ar[i]=Integer.parseInt(sar[i]);
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(ar[i]==0){
				break;
			}
			if(i>=k-1 && ar[i]==ar[k-1]){
				
			}else if(i>=k-1 && ar[i]!=ar[k-1]){
				break;
			}
			ans++;
		}
		out.println(ans);
		out.close();
	}

}
