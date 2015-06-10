package hackerrank_language;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Solution {

	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(System.out);
		String sar[]=("C:CPP:JAVA:PYTHON:PERL:PHP:RUBY:CSHARP:HASKELL:CLOJURE:"
				+ "BASH:SCALA:ERLANG:CLISP:LUA:BRAINFUCK:JAVASCRIPT:"
				+ "GO:D:OCAML:R:PASCAL:SBCL:DART:GROOVY:OBJECTIVEC").split(":");
		int t=Integer.parseInt(br.readLine());
		String s,s1[];
		String ans;
		while(t-->0){
			ans="INVALID";
			s1=(br.readLine()).split(" ");
			s=s1[1];
			for(int i=0;i<sar.length;i++){
				if(s.equals(sar[i])){
					ans="VALID";break;
				}
			}
			out.println(ans);
		}
		out.close();
	}

}
