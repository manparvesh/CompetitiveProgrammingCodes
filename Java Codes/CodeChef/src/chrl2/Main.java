package chrl2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
 
class Main{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader (new InputStreamReader (System.in));
		PrintWriter out=new PrintWriter(System.out);
		String str=br.readLine();
		int count=0;
		int i=0,j=0,k=0;
		char[] s;
		s=str.toCharArray();
		char[] c={'C','H','E','F'};
		while(true)
		{
			j=0;
			for(i=k;i<s.length&&j<4;i++)
				if(s[i]==c[j])
				{
					if(j==0)
						k=i+1;
					s[i]=0;
					j++;
				}
			if(j==4)
				count++;
			else
				break;
		}
		out.println(count);
		out.close();
	}
}  
