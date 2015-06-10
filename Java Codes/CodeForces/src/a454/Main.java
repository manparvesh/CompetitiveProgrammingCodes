package a454;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;


public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n=Integer.parseInt(br.readLine());
		int m;
		for(int i=1;i<n;i+=2){
			m=(n-i)/2;
			for(int j=0;j<m;j++){
				out.print("*");
			}
			for(int j=0;j<n-2*m;j++){
				out.print("D");
			}
			for(int j=0;j<m;j++){
				out.print("*");
			}
			out.println();
		}
		for(int i=n;i>0;i-=2){
			m=(n-i)/2;
			for(int j=0;j<m;j++){
				out.print("*");
			}
			for(int j=0;j<n-2*m;j++){
				out.print("D");
			}
			for(int j=0;j<m;j++){
				out.print("*");
			}
			out.println();
		}
		out.close();
	}

}
