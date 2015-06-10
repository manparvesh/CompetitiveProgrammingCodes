package lastdig2;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
	    int a,b;
	    while(t-->0){
	        String sar[]=br.readLine().split(" ");
	        a=Integer.parseInt(sar[0].substring(sar[0].length()-1));
	        if(sar[1].equals("0")){
	        	out.println("1");
	        }else{
		        if(sar[1].length()>1){
		        	b=Integer.parseInt(sar[1].substring(sar[1].length()-2));
		        }else{
		        	b=Integer.parseInt(sar[1].substring(sar[1].length()-1));
		        }
		        a%=10;
		        int ans=1;
		        
		            b%=4;
		            if(b==0){
		                b=4;
		            }
		            for(int i=0;i<b;i++){
		                ans*=a;
		            }
		            out.println(ans%10);
		        
	        }
	    }
		out.close();
	}
}
