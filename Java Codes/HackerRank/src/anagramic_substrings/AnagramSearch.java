package anagramic_substrings;

import java.util.HashMap;
import java.util.Arrays;

public class AnagramSearch	{
	public static void main(String args[])	{
		HashMap<Character,Integer> patMap = new HashMap<Character,Integer>();
		char pat[] = "ABCD".toCharArray();
		char txt[] = "BACDGABCDA".toCharArray();
		buildMapFromChar(patMap,pat);
		for(int i = 0 ; i < txt.length ; i++)	{
			if(i + pat.length - 1 < txt.length)	{
				char temp[] = Arrays.copyOfRange(txt, i, i+pat.length);
				System.out.println("Found:" + temp[0] + temp[3]);
				HashMap<Character,Integer> tempMap = new HashMap<Character,Integer>();
				buildMapFromChar(tempMap, temp);
				if(hashMapEqual(tempMap, patMap))	{
					System.out.println("Found @:" + i);
				}
			}
		}
	}
	public static void buildMapFromChar(HashMap<Character,Integer>patMap, char c[])	{
		for(int i = 0; i< c.length ; i++){
			if(patMap.get(c[i]) == null)	{
				patMap.put(c[i], 1);
			}else{
				int count= patMap.get(c[i]);
				patMap.put(c[i], ++count);
			}
		}
	}
	public static boolean hashMapEqual(HashMap<Character,Integer> map1, HashMap<Character,Integer> map2)	{
		return map1.equals(map2);
	}
}