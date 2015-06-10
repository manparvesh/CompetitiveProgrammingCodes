package ranklist;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int n,s;
		while(t-->0){
			String sar[]=(br.readLine()).split(" ");
			n=Integer.parseInt(sar[0]);
			s=Integer.parseInt(sar[1]);
			int ct=0;
			for(int i=n;s>0;i--){
				s-=((n-i+1));
				ct++;
				
				//out.println("s= "+s+"  ct= "+ct);
				if(s<(n)){
					break;
				}
			}
			out.println(n-ct);
		}
		out.close();
	}

}
