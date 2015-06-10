package the_time_in_words;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int h=Integer.parseInt(br.readLine());
		int m=Integer.parseInt(br.readLine());
		String hr="";
		if(h==1){
			hr="one";
		}else if(h==2){
			hr="two";
		}else if(h==3){
			hr="three";
		}else if(h==4){
			hr="four";
		}else if(h==5){
			hr="five";
		}else if(h==6){
			hr="six";
		}else if(h==7){
			hr="seven";
		}else if(h==8){
			hr="eight";
		}else if(h==9){
			hr="nine";
		}else if(h==10){
			hr="ten";
		}else if(h==11){
			hr="eleven";
		}else if(h==12){
			hr="twelve";
		}
		
		if(m==0){
			out.println(hr);
		}else if(m<30){
			out.println(hr);
		}else if(m==30){
			out.println();
		}
		
		out.close();
	}
}
