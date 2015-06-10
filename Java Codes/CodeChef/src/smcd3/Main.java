package smcd3;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
 
class Main{
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=(br.readLine());
		char start=s.charAt(0);
		int ans=0,ct=0,ctl=0;
		for(int i=0;i<s.length();i++){
			ct++;
			if(s.charAt(i)=='H'){
				ans+=(ct*100);
			}else{
				ans-=(ct*100);
			}
		}
		out.println(ans);
		out.close(); 
	}
} 