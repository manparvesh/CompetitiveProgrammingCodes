package rng;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.Vector;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		Scanner in=new Scanner(System.in);
		int n,k;
		Vector<BigInteger> v=new Vector<BigInteger>();
		/*String sar[]=br.readLine().split(" ");
		n=Integer.parseInt(sar[0]);
		k=Integer.parseInt(sar[1]);*/
		n=in.nextInt();
		k=in.nextInt();
		int A[]=new int[(k>n?k:n)],C[]=new int[(k>n?k:n)];
		//sar=br.readLine().split(" ");
		for(int i=0;i<n;i++){
			A[i]=in.nextInt();//Integer.parseInt(sar[i]);
		}
		//sar=br.readLine().split(" ");
		for(int i=0;i<n;i++){
			C[i]=in.nextInt();//Integer.parseInt(sar[i]);
		}
		if(k>n){
			for(int i=0;i<n;i++){
				BigInteger b=new BigInteger(""+A[i]);
				v.add(b);
			}
			for(int i=n;i<k;i++){
				BigInteger b=new BigInteger(""+0);
				for(int a=i-1;a>=i-n;a--){
					b=b.add(v.get(a).multiply(new BigInteger(""+C[i-a-1])));
				}
				v.add(b.mod(new BigInteger(""+104857601)));//out.println(b);
			}
			out.println(v.get(k-1));
		}else{
			out.println(A[k-1]);
		}
		out.close();
	}
}