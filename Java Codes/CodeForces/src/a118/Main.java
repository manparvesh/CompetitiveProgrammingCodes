package a118;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		s=s.toLowerCase();
		StringBuffer ans=new StringBuffer("");
		for(int i=0;i<s.length();i++){
			if(s.charAt(i)=='a' || s.charAt(i)=='e' || 
					s.charAt(i)=='o' || s.charAt(i)=='i' || 
					s.charAt(i)=='u' ){
				
			}else{
				ans.append(".");
				ans.append(s.charAt(i));
			}
		}
		out.println(ans);
		out.close();
	}

}
