package cWAMR103;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int a,b,n;
		while(t-->0){
			String s=br.readLine();
			s=clean(s);
			if(isPali(s)){
				out.println("YES");
			}else{
				out.println("NO");
			}
		}
		out.close();
	}

	public static String clean(String s){
		StringBuilder r=new StringBuilder("");
		for(int i=0;i<s.length();i++){
			if(((int)(s.charAt(i))<=(int)'z' && (int)(s.charAt(i))>=(int)'a') ||
					((int)(s.charAt(i))<=(int)'Z' && (int)(s.charAt(i))>=(int)'A')){
				r.append(s.charAt(i));
			}
		}
		return r.toString();
	}
	
	public static boolean isPali(String s){
		boolean flag=true;
		int mid=s.length()/2;
		for(int i=0;i<mid;i++){
			if((s.charAt(i)!=s.charAt(s.length()-i-1))){
				flag=false;break;
			}
		}
		return flag;
	}
	
}
