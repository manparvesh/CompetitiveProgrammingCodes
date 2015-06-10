package ide_identifying_comments;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String s=(br.readLine());
		int start=-1,start2=-1,stop=-1;
		String multi="uninitialized";
		while(s!=null){
			if(multi.equals("uninitialized")){
				start2=-1;
				for(int i=0;i<s.length()-1;i++){
					if(s.charAt(i)=='/' && s.charAt(i+1)=='*'){
						start2=i;
						multi="started";
						break;
					}
				}
				
				if(start2==-1){
					start=-1;
					for(int i=0;i<s.length()-1;i++){
						if(s.charAt(i)=='/' && s.charAt(i+1)=='/'){
							start=i;break;
						}
					}
					if(start>-1){
						out.println(s.substring(start).trim());
					}
				}

				if(multi.equals("started")){
					stop=-1;
					for(int i=0;i<s.length()-1;i++){
						if(s.charAt(i)=='*' && s.charAt(i+1)=='/'){
							stop=i+1;
							multi="uninitialized";
							break;
						}
					}
					if(stop!=-1){//multiline starting and ending in same line
						out.println(s.substring(start2,stop+1).trim());
					}else{//multiline starting and ending in diff line
						out.println(s.substring(start2).trim());
					}
				}
				
			}else if(multi.equals("started")){
				stop=-1;
				for(int i=0;i<s.length()-1;i++){
					if(s.charAt(i)=='*' && s.charAt(i+1)=='/'){
						stop=i+1;
						multi="uninitialized";
						break;
					}
				}
				if(stop!=-1){//started and stopping multiline
					out.print(s.substring(0,stop+1).trim());
					if(s.length()-stop>=2){
						start=-1;
						for(int i=stop+1;i<s.length()-1;i++){
							if(s.charAt(i)=='/' && s.charAt(i+1)=='/'){
								start=i;break;
							}
						}
						if(start>-1){
							out.print(s.substring(start).trim());
						}
					}
					out.println();
				}else{//started and ongoing mulitline
					out.println(s.trim());
				}
			}
			
			s=(br.readLine());
		}
		out.close();
	}

}
