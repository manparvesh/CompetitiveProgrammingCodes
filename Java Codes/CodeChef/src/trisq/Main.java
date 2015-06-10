package trisq;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int n;
		while(t-->0){
			n=Integer.parseInt(br.readLine());
			n/=2;
			n=(n*n-n)/2;
			out.println(n);
		}
		out.close();
	}

}
