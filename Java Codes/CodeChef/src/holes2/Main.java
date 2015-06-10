package holes2;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int ar[]=new int[t];
		for(int i=0;i<t;i++){
			ar[i]=Integer.parseInt(br.readLine());
		}
		Arrays.sort(ar);
		for(int i=0;i<t;i++){
			out.println(ar[i]);
		}
		out.close();
	}

}
