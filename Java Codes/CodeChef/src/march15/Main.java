package march15;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	/* ------------------ start here ---------------------*/
	private static int X; // we assume that unsigned is a 32bit integer type

	private static void srand1(int S){
	  X = S;
	}

	private static int nextInteger1(){
	  X = X * 1103515245 + 12345;
	  return (X / 65536) % 32768;
	}

	private static boolean generator1(int N, int S, int A[]){
	  srand1(S);
	  int B[]=new int[N];
	  boolean res=true;
	  for(int i=0;i<N;i++){
	    B[i] = nextInteger1() % 2; 
	  }
	  for(int i=0;i<N;i++){
		  if(A[i]!=B[i]){
			  res=false;break;
		  }
	  }
	  return res;
	}
	/* ------------------ end here -----------------------*/

//	The 2nd generator works as follows (C++ code):
	/* ------------------ start here ---------------------*/
	private static int x, y, z, w; // we assume that unsigned is a 32bit integer type

	private static void srand2(int S){
	  x = S;
	  y = x * S;
	  z = y * S;
	  w = z * S;
	}

	private static int nextInteger2(){
	  int t = x ^ (x << 11);
	  x = y; y = z; z = w;
	  return w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)); 
	}

	private static boolean generator2(int N, int S, int A[]){
	  srand2(S);
	  boolean res=true;
	  int B[]=new int[N];
	  for(int i=0;i<N;i++){
	    B[i] = nextInteger2() % 2; 
	  }
	  for(int i=0;i<N;i++){
		  if(A[i]!=B[i]){
			  res=false;break;
		  }
	  }
	  return res;
	}
	/* ------------------ end here -----------------------*/


	
	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int x,y,k,n,t=Integer.parseInt(br.readLine());
		String s;
		while(t-->0){
			s=br.readLine();
			int l=s.length();
			int A[]=new int[l];
			for(int i=0;i<l;i++){
				A[i]=(int)(s.charAt(i)-'0');
			}
			for(int i=1;i<1000000000;i++){
				if(generator1(l,i,A)){
					out.println("LCG");break;
				}else if(generator2(l,i,A)){
					out.println("Xorshift");break;
				}
			}
		}
		out.close();
	}
	
}
