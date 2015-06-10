package b514;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashSet;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s1[]=(br.readLine()).split(" ");
		int n=Integer.parseInt(s1[0]);
		int x0=Integer.parseInt(s1[1]);
		int y0=Integer.parseInt(s1[2]);
		double m;
		int x,y;
		HashSet<Double> set=new HashSet<Double>();
		for(int i=0;i<n;i++){
			String s[]=(br.readLine()).split(" ");
			x=Integer.parseInt(s[0]);
			y=Integer.parseInt(s[1]);
			m=((double)(y-y0)/(double)(x-x0));
			set.add(m);
		}
		out.println(set.size());
		out.close();
	}

}
