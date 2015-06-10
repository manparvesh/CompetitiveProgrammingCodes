package b158;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n=Integer.parseInt(br.readLine());
		int ar[]=new int[n];
		String sar[]=(br.readLine()).split(" ");
		for(int i=0;i<n;i++){
			ar[i]=Integer.parseInt(sar[i]);
		}
		int ans=0,n1=0,n2=0,n3=0,n4=0,i;
		for(i=0;i<n;i++){
			if(ar[i]==2){
				n2++;
			}else if(ar[i]==1){
				n1++;
			}else if(ar[i]==3){
				n3++;
			}else{
				n4++;
			}
		}
		ans+=n4;
		ans+=n3;
		ans+=(n2/2);
		if(n3<n1){
			n1-=n3;
		}else{
			n1=0;
		}
		if(n2%2>0){
			n1-=2;
			ans++;
		}
		
		ans+=Math.ceil((double)n1/4);
		
		out.println(ans);
		out.close();
	}

}
