package sherlock_and_planes;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		int ptx[]=new int[4],pty[]=new int[4],ptz[]=new int[4];
		int vx[]=new int[3],vy[]=new int[3],vz[]=new int[3];
		String sar[];
		while(t-->0){
			sar=br.readLine().split(" ");
			ptx[0]=Integer.parseInt(sar[0]);
			pty[0]=Integer.parseInt(sar[1]);
			ptz[0]=Integer.parseInt(sar[2]);
			
			sar=br.readLine().split(" ");
			ptx[1]=Integer.parseInt(sar[0]);
			pty[1]=Integer.parseInt(sar[1]);
			ptz[1]=Integer.parseInt(sar[2]);
			
			vx[0]=ptx[1]-ptx[0];
			vy[0]=pty[1]-pty[0];
			vz[0]=ptz[1]-ptz[0];
			
			sar=br.readLine().split(" ");
			ptx[2]=Integer.parseInt(sar[0]);
			pty[2]=Integer.parseInt(sar[1]);
			ptz[2]=Integer.parseInt(sar[2]);
			
			vx[1]=ptx[2]-ptx[1];
			vy[1]=pty[2]-pty[1];
			vz[1]=ptz[2]-ptz[1];
			
			sar=br.readLine().split(" ");
			ptx[3]=Integer.parseInt(sar[0]);
			pty[3]=Integer.parseInt(sar[1]);
			ptz[3]=Integer.parseInt(sar[2]);
			
			vx[2]=ptx[3]-ptx[2];
			vy[2]=pty[3]-pty[2];
			vz[2]=ptz[3]-ptz[2];
			
			//taking cross product of 0,1 and taking its dot product with 2
			
			int dp=0;
			int cpx,cpy,cpz;
			
			cpx=vz[2]*vy[1] - vz[1]*vy[2];
			cpy=vz[1]*vx[2] - vx[1]*vz[2];
			cpz=vx[1]*vy[2] - vy[1]*vx[2];
			
			dp=cpx*vx[0] + cpy*vy[0] + cpz*vz[0];
			
			/*out.println(vx[0]+" "+vy[0]+" "+vz[0]+" ");
			out.println(cpx+" "+cpy+" "+cpz+" ");
			out.println(dp);*/
			if(dp==0){
				out.println("YES");
			}else{
				out.println("NO");
			}
			
		}
		out.close();
	}
}