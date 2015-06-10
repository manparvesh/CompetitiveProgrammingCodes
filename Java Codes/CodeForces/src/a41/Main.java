package a41;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String n=br.readLine(),m=br.readLine();
		if(isRev(n,m)){
			out.println("YES");
		}else{
			out.println("NO");
		}
		out.close();
	}

	private static boolean isRev(String n, String m) {
		
		return false;
	}

}
