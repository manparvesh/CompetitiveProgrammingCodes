package a112;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String sar[]=br.readLine().split(" ");
		int n=Integer.parseInt(sar[0]);
		int m=Integer.parseInt(sar[1]);
		int t=n+m;
		int ans=0;
		if(n*3<=t){
			ans=n;
		}else if(t%3==0){
			ans=t/3;
		}else{
			while(true){
				
			}
		}
		
		out.println(ans);
		out.close();
	}

}
