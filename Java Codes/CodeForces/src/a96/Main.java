package a96;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Vector;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		Vector<Integer> v=new Vector<Integer>();
		char temp=s.charAt(0);
		int ct=1;
		String ans="NO";
		for(int i=1;i<s.length();i++){
			if(s.charAt(i)==temp){
				ct++;
			}else{
				v.add(ct);
				temp=s.charAt(i);
				ct=1;
			}
			if(i==s.length()-1){
				v.add(ct);
			}
		}
		for(int i=0;i<v.size();i++){
			if(v.get(i)>=7){
				ans="YES";break;
			}
		}
		out.println(ans);
		out.close();
	}

}
