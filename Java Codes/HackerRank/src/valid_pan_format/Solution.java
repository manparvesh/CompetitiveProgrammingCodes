package valid_pan_format;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s;
		boolean flag=true;
		while(t-->0){
			s=br.readLine();
			flag=true;
			for(int i=0;i<5;i++){
				if(!((int)(s.charAt(i))>=(int)'A' && (int)(s.charAt(i))<=(int)'Z')){
					flag=false;break;
				}
			}
			for(int i=5;i<9;i++){
				if(!((int)(s.charAt(i))>=(int)'0' && (int)(s.charAt(i))<=(int)'9')){
					flag=false;break;
				}
			}
			if(!((int)(s.charAt(9))>=(int)'A' && (int)(s.charAt(9))<=(int)'Z')){
				flag=false;
			}
			if(flag){
				out.println("YES");
			}else{
				out.println("NO");
			}
		}
		out.close();
	}

}
