package suffix_tree;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		while(t-->0){
			s=br.readLine();
			int len=s.length();
			String sar[]=new String[len+1];
			sar[0]="$";
			for(int i=0;i<len;i++){
				sar[i]=s.substring(i)+"$";
			}
			Arrays.sort(sar);
			
		}
		out.close();
	}
}
