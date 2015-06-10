package chefch;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashSet;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t,n;
		String s;
		s=br.readLine();
		t=Integer.parseInt(s);
		while(t-->0){
			s=br.readLine();
			n=Integer.parseInt(s);
			int ar[]=new int[n];
			String sar[];
			s=br.readLine();
			sar=s.split(" ");
			HashSet<Integer> set=new HashSet<Integer>();
			for(int i=0;i<n;i++){
				ar[i]=Integer.parseInt(sar[i]);
				set.add(ar[i]);
			}
			out.println(set.size()-1);
		}
		out.close();
	}

}
