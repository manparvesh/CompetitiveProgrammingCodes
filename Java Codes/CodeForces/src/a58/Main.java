package a58;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		int a=0;
		String ans="NO";
		for(int i=0;i<s.length();i++){
			if(a==0){
				if(s.charAt(i)=='h'){
					a++;
				}
			}else if(a==1){
				if(s.charAt(i)=='e'){
					a++;
				}
			}else if(a==2){
				if(s.charAt(i)=='l'){
					a++;
				}
			}else if(a==3){
				if(s.charAt(i)=='l'){
					a++;
				}
			}else if(a==4){
				if(s.charAt(i)=='o'){
					a++;
					ans="YES";break;
				}
			}
		}
		out.println(ans);
		out.close();
	}

}
