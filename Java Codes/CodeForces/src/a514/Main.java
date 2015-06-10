package a514;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=(br.readLine());
		for(int i=1;i<s.length()-1;i++){
			s=(invert(s,i-1).compareTo(s)<0?invert(s,i-1):s);
		}
		if(s.charAt(s.length()-1)!='0'){
			s=(invert(s,s.length()-1).compareTo(s)<0?invert(s,s.length()-1):s);
		}
		
		out.println(s);
		out.close();
	}

	private static String invert(String s,int i){
		char[] c=s.toCharArray();
		char temp=s.charAt(i-1);
		c[s.length()-1-i]=temp;
		return new String(c);
	}
	
}
