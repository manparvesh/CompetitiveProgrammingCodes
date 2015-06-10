package common_child;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t;
		String s;
		//s=br.readLine();
		t=2;
		int ar[][]=new int[t][26];
		for(int i=0;i<t;i++){
			for(int j=0;j<26;j++){
				ar[i][j]=0;
			}
		}
		
			for(int i=0;i<t;i++){
				s=br.readLine();
				
					for(int a=0;a<s.length();a++){
						ar[i][(int)(s.charAt(a)-'a')]++;
					
				}
			}
			int ans=0;
			for(int i=0;i<26;i++){
				int temp=0;
				for(int j=0;j<t-1;j++){
					temp+=(Math.min(ar[j][i], ar[j+1][i]));
				}
				ans+=temp;
			}
			out.println(ans);
		
		out.close();
	}

}

