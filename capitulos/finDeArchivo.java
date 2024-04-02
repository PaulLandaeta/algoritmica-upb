import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static Scanner scan = new Scanner(System.in);
	public static void main (String[] args) throws java.lang.Exception
	{
		double costo; 
		while(scan.hasNext()){ 
			costo = scan.nextDouble();
			System.out.println(costo);
		}
	}
}