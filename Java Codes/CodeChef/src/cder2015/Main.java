package cder2015;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Vector;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		while(t-->0){
			s=br.readLine();
			Vector<String> v=new Vector<String>();
			Vector<String> op=new Vector<String>();
			char c,c1;
			String st;
			st="";
			st+=s.charAt(0);
			v.add(st);
			for(int i=1;i<s.length();i++){
				c=s.charAt(i);
				if(c=='+' || c=='-' || c=='*'){
					st="";
					st+=c;
					op.add(st);
				}else{
					c1=s.charAt(i-1);
					if(c1=='+' || c1=='-' || c1=='*'){
						st="";
						st+=c;
						v.add(st);
					}else{
						st=v.get(v.size()-1);
						st+=c;
						v.set(v.size()-1, st);
					}
				}
			}
			int ar[]=new int[v.size()];
			for(int i=0;i<v.size();i++){
				ar[i]=Integer.parseInt(v.get(i));
			}
			int ans=0;
			for(int i=v.size()-1;i>0;i--){
				st=op.get(i-1);
				if(st.equals("*")){
					
				}else if(st.equals("+")){
					
				}else{
					
				}
			}
		}
		out.close();
	}
}
