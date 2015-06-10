package journey_to_the_moon;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Vector;

public class Main {
	
	static int maxn = 100001;
	static Vector<Vector<Integer>> Al=new Vector<Vector<Integer>>();
	static boolean vis[]=new boolean[maxn];
	static int res=0;
	
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int n,I,A,B;
		Al.setSize(maxn);
		
		Vector<Integer> R=new Vector<Integer>();
		
		String sar[]=br.readLine().split(" ");
		n=Integer.parseInt(sar[0]);
		I=Integer.parseInt(sar[1]);

		for(int i=0;i<I;i++){
			sar=br.readLine().split(" ");
			A=Integer.parseInt(sar[0]);
			B=Integer.parseInt(sar[1]);
			Al.set(A).add(B);
			Al.set(B).add(A);
		}
		
		long sum=0;
		
		for(int i=0;i<n;i++){
			if(!vis[i]){
				res=0;
				DFS(i);
				R.add(res);
				sum+=res;
			}
		}
		
		long result=0;
		
		for (int i=R.size()-1; i>=0; i--){
	        sum-=R.get(i);
	        result = result + (sum*R.get(i));
	    }
		
		out.println(result);
		
		out.close();
	}

	private static void DFS(int s) {
		vis[s]=true;
		res++;
	    for (int i=0; i<Al.get(s).size(); i++){
	        int to = Al.get(s).get(i);
	        if (!vis[to]){
	            DFS(to);
	        }
	    }
	}
}















