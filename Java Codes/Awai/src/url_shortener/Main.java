package url_shortener;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Vector;

class Pair{
	String URL, shortened_URL;
}

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		out.println("Enter your choice:\n1: Shorten URL\n2. Print the list of shortened URLs.\n0: Quit\n");
		int t=Integer.parseInt(br.readLine());
		int c=0;
		Vector<Pair> v=new Vector<Pair>();
		while(t!=0){
			if(t==1){
				c=v.size();
				
			}
			t=Integer.parseInt(br.readLine());
		}
		out.close();
	}
}
