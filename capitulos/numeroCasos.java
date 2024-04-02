/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	static Scanner scan = new Scanner(System.in);
	public static void main (String[] args) throws java.lang.Exception
	{
		int cases = scan.nextInt();
		for(int i = 0; i < cases; i++) {
			int a,b,c;
			a = scan.nextInt();
			b = scan.nextInt();
			c = scan.nextInt();
			System.out.println(a+" "+b+" "+c);
		}
	}
}