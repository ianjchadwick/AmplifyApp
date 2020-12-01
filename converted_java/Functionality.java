package test_package;

import java.util.Scanner;

public class Functionality {

	public static Stack createParallelGroup() 
	{

	    char ans;
	    Stack myResStack = new Stack();

	    do
	    {
	    myResStack.addResistor();
	    System.out.println("Would you like to add another resistor? (Y/N) ");
	    Scanner s = new Scanner(System.in);
	    ans = s.next().charAt(0);
	    }
	    while (ans == 'Y');

	    return myResStack;

	 }
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Stack myResStack = new Stack();
		myResStack = createParallelGroup();
	    //myResStack.addResistor();

		System.out.println("Here's what you just created: ");
	    myResStack.printStack();

	    System.out.println("Here's it's equivalent resistance: ");
	    R resEq = myResStack.equiv();
	    System.out.println(resEq.value);

	    System.out.println("Let's create a new parallel group...");
	    Stack newGroup = createParallelGroup();

	    System.out.println("Now we'll add this new group nested inside of the first one...");

	    R newEq = newGroup.equiv();
	    myResStack.addResistor(newEq);
	    resEq = myResStack.equiv();

	    System.out.println("And here's our new equivalent resistance: ");
	    System.out.println(resEq.value);
	}
	
}
