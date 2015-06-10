package tricentr;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
	private static final double NaN = 0.000;

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out =new PrintWriter(System.out);
		int t=Integer.parseInt(br.readLine());
		double a,b,c,x,y,z,area,hg;
		String sar[];
		while(t-->0){
			sar=br.readLine().split(" ");
			a=Double.parseDouble(sar[0]);
			x=Double.parseDouble(sar[1]);
			y=Double.parseDouble(sar[2]);
			z=Double.parseDouble(sar[3]);
			b=a*x/y;
	        c=a*x/z;
	        double p=(a+b+c)/2;
			area=Math.sqrt(p*(p-a)*(p-b)*(p-c));
			double R=a*b*c/4/area;
			double X=9*R*R-a*a-b*b-c*c;
			if(X<0){
				X=0.0;
			}
			hg=2*(Math.sqrt(X))/3;
			//out.println(R+" "+X+" "+hg);
			if(hg==NaN){
				out.printf("%.3f 0.000\n", area,hg);
			}else{
				out.printf("%.3f %.3f\n", area,hg);
			}
		}
		out.close();
	}
}
