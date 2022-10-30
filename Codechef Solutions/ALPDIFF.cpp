/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan=new Scanner(System.in);
		int T=scan.nextInt();
		while(T-->0)
		{
		    String a=scan.next();
		    String b=scan.next();
		    int i=0;
		    HashSet<String> hs=new HashSet<String>();
		    while(i<b.length())
		    {
		        if(!a.contains(Character.toString(b.charAt(i))))
		        {
		            hs.add(Character.toString(b.charAt(i)));
		        }
		        i++;
		    }
		    List<String> ls=new ArrayList<String>(hs);
		    
		    Collections.sort(ls);
		    
		    if(ls.size()>0)
    		 {   for(String s:ls)
    		    {
    		        System.out.print(s);
    		    }
    		    System.out.println();
    		 }
    		 else
    		    System.out.println(-1);
		}
	}
}
