package sherlock_and_anagrams;

import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s,st,r;
		while(t-->0){
			int ans=0;
			s=br.readLine().toLowerCase();
			for(int i=0;i<s.length();i++){
				for(int j=i+1;j<s.length();j++){
					st=s.substring(i,j);
					r=s.substring(0,i)+s.substring(j);
					if(ana(st,r)){
						ans++;
					}
				}
			}
			out.println(ans);
		}
		out.close();
	}
	
	private static boolean ana(String a,String b){
		boolean res=true;
		//a is the smaller one!
		int aa[]=new int[26],bb[]=new int[26];
		for(int i=0;i<a.length();i++){
			aa[(int)(a.charAt(i)-'a')]++;
		}
		for(int i=0;i<b.length();i++){
			bb[(int)(b.charAt(i)-'a')]++;
		}
		for(int i=0;i<26;i++){
			if(aa[i]>bb[i]){
				res=false;break;
			}
		}
		return res;
	}
}
