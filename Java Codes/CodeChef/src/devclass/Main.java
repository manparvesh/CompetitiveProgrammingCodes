package devclass;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int type,b,g;
		String s;
		while(t-->0){
			type=Integer.parseInt(br.readLine());
			s=br.readLine();
			b=0;g=0;
			for(int i=0;i<s.length();i++){
				if(s.charAt(i)=='B'){
					b++;
				}else{
					g++;
				}
			}
			if(done(s)){
				out.println("0");
			}else if((int)Math.abs(b-g)>1){
				out.println("-1");
			}else{
				int ans=0;
				
			}
		}
		out.close();
	}

	private static boolean done(String s) {
		boolean res=true;
		for(int i=1;i<s.length();i++){
			if(s.charAt(i)!=s.charAt(i-1)){
				res=false;break;
			}
		}
		return res;
	}

}
