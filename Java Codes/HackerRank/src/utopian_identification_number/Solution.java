package utopian_identification_number;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		String ans="VALID",s;
		while(t-->0){
			s=br.readLine();
			ans="VALID";
			int countLow=0,countDig=0,countUp=0;
			boolean doneLow=false,doneDig=false,doneUp=false;
			char c;
			for(int i=0;i<s.length();i++){
				c=s.charAt(i);
				if(Character.isLowerCase(c) && !doneLow && i>=0 && i<=2){
					countLow++;
				}else if(Character.isDigit(c) && !doneDig && i>=0 && i<=10){
					countDig++;
				}else if(Character.isUpperCase(c) && !doneUp && i>=1){
					countUp++;
				}else{
					ans="INVALID";break;
				}
				
			}
			if(countLow<=3 && countLow>=0
				&& countDig>=2 && countDig<=8
				&& countUp>=3){
					
			}else{
				ans="INVALID";
			}
			out.println(ans);
		}
		out.close();
	}

}
