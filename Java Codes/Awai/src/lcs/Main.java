package lcs;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	private static int l,l2;
	
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String a,b;
		a=br.readLine();
		b=br.readLine();
		out.println();
		out.println("Longest common subsequence: "+lcs(a,b)+" length: "+l);
		out.println("Longest common substring: "+lcs2(a,b)+" length: "+l2);
		out.close();
	}

	private static String lcs2(String S1, String S2) {
		int Start = 0;
	    int Max = 0;
	    for (int i = 0; i < S1.length(); i++)
	    {
	        for (int j = 0; j < S2.length(); j++)
	        {
	            int x = 0;
	            while (S1.charAt(i + x) == S2.charAt(j + x))
	            {
	                x++;
	                if (((i + x) >= S1.length()) || ((j + x) >= S2.length())) break;
	            }
	            if (x > Max)
	            {
	                Max = x;
	                Start = i;
	            }
	         }
	    }
	    String ans=S1.substring(Start, (Start + Max));
	    l2=ans.length();
	    return ans;
	}

	private static String lcs(String a, String b) {
		 int aLen = a.length();
		    int bLen = b.length();
		    String ans="";
		    if(aLen == 0 || bLen == 0){
		        ans="";
		        l=ans.length();
		    	return ans;
		    }else if(a.charAt(aLen-1) == b.charAt(bLen-1)){
		        ans=lcs(a.substring(0,aLen-1),b.substring(0,bLen-1))
			            + a.charAt(aLen-1);
		        l=ans.length();
		        return ans;
		    }else{
		        String x = lcs(a, b.substring(0,bLen-1));
		        String y = lcs(a.substring(0,aLen-1), b);
		        ans=(x.length() > y.length()) ? x : y;
		        l=ans.length();
		        return ans;
		    }
	}

}