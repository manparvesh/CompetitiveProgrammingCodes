package all_possible_combinations_of_string_of_given_length;

import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		char c[];
		int l,k;
		while(t-->0){
			s=br.readLine();
			k=Integer.parseInt(br.readLine());
			l=s.length();
			c=s.toCharArray();
			printAllKStrings(c,"",k,l);
		}
		out.close();
	}

	private static void printAllKStrings(char[] c, String prefix, int k, int l) {
		if(k==0){
			System.out.println(prefix);
			return;
		}
		
		for(int i=0;i<l;i++){
			String newPref=prefix+c[i];
			printAllKStrings(c,newPref,k-1,l);
		}
	}
}
