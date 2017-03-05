import java.util.Scanner;

public class SquareANumber {


	public static void main (String[] args) {
		int num, square;
	 
		System.out.print ("Enter an integer value: ");
		Scanner input = new Scanner(System.in);
	  
		num = input.nextInt();
	 
		square = num*num;
	  
		System.out.println ("Your value: " + num + " squared is: " + square);
		
	}
		
}