package yapc2015;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int x,y,sx,sy,vx,vy,cx,cy;
		String sar[],ans;
		while(t-->0){
			sar=br.readLine().split(" ");
			ans="Vishal";
			sx=Integer.parseInt(sar[0]);
			sy=Integer.parseInt(sar[1]);
			vx=Integer.parseInt(sar[2]);
			vy=Integer.parseInt(sar[3]);
			cx=Integer.parseInt(sar[4]);
			cy=Integer.parseInt(sar[5]);
			
			x=(int)Math.abs(sx-vx);
			y=(int)Math.abs(sy-vy);
			
			if(x==0 && y==0){
				ans="Shriraj";
			}else if(x>=cx && y>=cy){
				int tm=(int)Math.min((double)x/cx, (double)y/cy);
				x-=(tm*cx);
				y-=(tm*cy);
			}

			if(x==0 && y>=cy && y!=0){
				int tm=y/cy;
				y-=(tm*cy);
			}
			
			if(x==0 && y==0){
				ans="Shriraj";
			}
			
			out.println(ans);
		}
		out.close();
	}
}
