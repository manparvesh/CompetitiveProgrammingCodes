package detecting_valid_latitude_and_longitude;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s,sar[];
		String ans;
		double a,b;
		while(t-->0){
			s=br.readLine();
			ans="Valid";
			s=s.substring(1,s.length()-1);
			sar=s.split(", ");
			a=Double.parseDouble(sar[0]);
			b=Double.parseDouble(sar[1]);
			//out.println(a+" "+b);
			
			if(((sar[0].charAt(0)=='-' || sar[0].charAt(0)=='+')
				&& sar[0].charAt(1)=='0')
				|| sar[0].charAt(0)=='0'
				|| sar[0].charAt(sar[0].length()-1)=='.'){
				ans="Invalid";
			}
			if(((sar[1].charAt(0)=='-' || sar[1].charAt(0)=='+')
					&& sar[1].charAt(1)=='0')
					|| sar[1].charAt(0)=='0'
					|| sar[1].charAt(sar[1].length()-1)=='.'){
					ans="Invalid";
			}
			if(a>90 || a<-90
				|| b>180 || b<-180){
				ans="Invalid";
			}
			out.println(ans);
		}
		out.close();
	}

}
