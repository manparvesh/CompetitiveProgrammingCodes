package bigO02;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		while(t-->0){
			int n=Integer.parseInt(br.readLine());
			double ans=n*Math.log(n)-n+(0.5*Math.log(2*Math.PI*n));
			if(n<=3){
				out.println("1");
			}else{
				out.println((int)(Math.ceil(ans/Math.log(10.0))));
			}
		}
		out.close();
	}
}
