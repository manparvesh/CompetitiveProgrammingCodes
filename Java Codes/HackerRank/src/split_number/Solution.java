package split_number;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String s,sar[];
		while(t-->0){
			s=br.readLine();
			if(s.contains(" ")){
				sar=s.split(" ");
			}else{
				sar=s.split("-");
			}
			out.println("CountryCode="+sar[0]+",LocalAreaCode="+sar[1]+",Number="+sar[2]);
		}
		out.close();
	}

}
