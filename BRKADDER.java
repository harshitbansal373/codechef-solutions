/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int T=sc.nextInt();
	    
	    while(T-->0)
	    {
	        long a=sc.nextLong();
	        long b=sc.nextLong();
	        
	        if(a%2==0)
	        {
	            if(b==a+2 || b==a-2 || b==a-1)
	            {
	                System.out.println("YES");
	            }
	            else 
	            {
	                System.out.println("NO");
	            }
	        }
	        else 
	        {
	            if(b==a+1 || b==a+2 || b==a-2)
	            {
	                System.out.println("YES");
	            }
	            else
	            {
	                System.out.println("NO");
	            }
	        }
	    }
	}
}
