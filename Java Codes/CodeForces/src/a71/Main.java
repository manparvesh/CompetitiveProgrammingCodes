package a71;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		while(t-->0){
			s=br.readLine();
			if(s.length()<=10){
				out.println(s);
			}else{
				StringBuffer sb=new StringBuffer("");
				sb.append(s.charAt(0));
				sb.append(s.length()-2);
				sb.append(s.charAt(s.length()-1));
				out.println(sb);
			}
		}
		out.close();
	}

}
