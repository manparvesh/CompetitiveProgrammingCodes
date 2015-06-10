package a131;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		int flag=1;
		if(Character.isUpperCase(s.charAt(0))){
			flag=2;
			for(int i=1;i<s.length();i++){
				if(Character.isUpperCase(s.charAt(i))){
					flag=3;
					break;
				}else{
					
					break;
				}
			}
		}else{
			for(int i=1;i<s.length();i++){
				if(Character.isUpperCase(s.charAt(i))){
					
				}else{
					flag=2;
					break;
				}
			}
		}
		if(flag==2){
			out.println(s);
		}else if(flag==3){
			s=s.toLowerCase();
			out.println(s);
		}else{
			s=s.toLowerCase();
			s=s.substring(0,1).toUpperCase()+s.substring(1);
			out.println(s);
		}
		out.close();
	}

}
