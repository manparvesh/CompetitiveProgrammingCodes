package a281;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		s=s.substring(0,1).toUpperCase()+s.substring(1);
		out.println(s);
		out.close();
	}

}
