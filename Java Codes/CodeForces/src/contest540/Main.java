package contest540;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n=Integer.parseInt(br.readLine());
		String sar[]=br.readLine().split("");
		int a1[]=new int[n];
		for(int i=0;i<n;i++){
			a1[i]=Integer.parseInt(sar[i]);
		}
		sar=br.readLine().split("");
		int a2[]=new int[n];
		for(int i=0;i<n;i++){
			a2[i]=Integer.parseInt(sar[i]);
		}
		int ans=0;
		for(int i=0;i<n;i++){
			int a=a1[i],b=a2[i];
			if(a>b){
				int temp=a;
				a=b;
				b=temp;
			}
			int n1=b-a;
			b=10-b;
			int n2=a+b;
			ans+=(n1<n2?n1:n2);
		}
		out.println(ans);
		out.close();
	}
}
