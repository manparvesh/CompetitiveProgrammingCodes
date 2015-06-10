package approx2;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Vector;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int n,k,t=Integer.parseInt(br.readLine().trim());
		String sar[];
		while(t-->0){
			sar=br.readLine().split(" ");
			n=Integer.parseInt(sar[0]);
			k=Integer.parseInt(sar[1]);
			int ar[]=new int[n];
			sar=br.readLine().split(" ");
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
			}
			Vector<Integer> v=new Vector<Integer>();
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					v.add(Math.abs(ar[i]+ar[j]-k));
				}
			}
			int b[]=new int[v.size()];
			for(int i=0;i<v.size();i++){
				b[i]=v.get(i);
			}
			Arrays.sort(b);
			int min=b[0],count=1;
			for(int i=1;i<v.size();i++){
				if(b[i]==min){
					count++;
				}else{
					break;
				}
			}
			out.println(min+" "+count);
		}
		out.close();
	}
}
