package surfrn;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
	
	static boolean ar[][]=new boolean[100][100];
	static boolean vis[][]=new boolean[100][100];
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine()),n,a,b;
		String sar[],sar1[];
		int x,y;
		while(t-->0){
			sar=br.readLine().split(" ");
			n=Integer.parseInt(sar[0]);
			a=Integer.parseInt(sar[1]);
			b=Integer.parseInt(sar[2]);
			for(int i=0;i<n-1;i++){
				sar1=br.readLine().split(" ");
				x=Integer.parseInt(sar1[0]);
				y=Integer.parseInt(sar1[1]);
				x--;y--;
				ar[x][y]=true;
				ar[y][x]=true;
			}
			out.println(bfs(n,a,b));
		}
		out.close();
	}

	private static int bfs(int n, int a, int b) {
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ar[i][j]=true;
				vis[i][j]=true;
			}
		}
		
		return ans;
	}

}
