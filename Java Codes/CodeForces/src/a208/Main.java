package a208;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=br.readLine();
		String sar[]=s.split("WUB");
		StringBuilder ans=new StringBuilder("");
		for(int i=0;i<sar.length;i++){
			ans.append(sar[i]+" ");
		}
		out.println(ans.toString().trim());
		out.close();
	}

}
