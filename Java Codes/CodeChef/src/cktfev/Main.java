package cktfev;

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
			if(paliCt(s)){
				out.println("yes");
			}else{
				out.println("no");
			}
		}
		out.close();
	}

	private static boolean paliCt(String s) {
		int ct=0,mid=s.length()/2;
		for(int i=0;i<mid;i++){
			if(s.charAt(i)!=s.charAt(s.length()-1-i)){
				ct++;
			}
		}
		if(ct>1){
			return false;
		}
		return true;
	}

}
