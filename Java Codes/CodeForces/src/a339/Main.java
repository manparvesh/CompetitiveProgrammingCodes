package a339;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		
		String[] sar=s.split("\\+");
		int n=sar.length;
		if(n==1){
			out.println(sar[0]);
		}else{
			int ar[]=new int[n];
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
			}
			Arrays.sort(ar);
			for(int i=0;i<n-1;i++){
				out.print(ar[i]+"+");
			}
			out.println(ar[n-1]);
		}	
		out.close();
	}

}
