package two_strings;

import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String a,b;
		while(t-->0){
			a=br.readLine().toLowerCase();
			b=br.readLine().toLowerCase();
			int a1[]=new int[26],a2[]=new int[26];
			for(int i=0;i<a.length();i++){
				a1[(int)(a.charAt(i)-'a')]++;
			}
			for(int i=0;i<b.length();i++){
				a2[(int)(b.charAt(i)-'a')]++;
			}
			boolean ans=false;
			for(int i=0;i<26;i++){
				if((a1[i]>0 || a2[i]>0) && a1[i]!=a2[i]){
					ans=true;break;
				}
			}
			if(ans){
				out.println("YES");
			}else{
				out.println("NO");
			}
		}
		out.close();
	}
}
