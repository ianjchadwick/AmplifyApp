package amplify.bin;

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
	
	//calculates the current given a resistance and voltage
	public static double calcCurrent(R myRes, double voltage)
	{
		double current;
		
		current = voltage/ myRes.getVal();
		
		return current;
	}
	
	//calculates the voltage given a resistance and current
	public double calcVoltage(R myRes, double current)
	{
		double voltage;
		
		voltage = current * myRes.getVal();
		
		return voltage;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double voltage = 0;
		double current = 0;
		
		
		Stack myResStack = new Stack();
		myResStack = createParallelGroup();
	    //myResStack.addResistor();

		System.out.println("Here's what you just created: ");
	    myResStack.printStack();

	    System.out.println("Here's its equivalent resistance: ");
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
	    
	    
	    //Test code for calcCurrent
	    System.out.println("Enter a voltage value: ");
	    Scanner voltScan = new Scanner(System.in);
	    voltage = voltScan.nextDouble();
	    
	    
	    System.out.println(calcCurrent(resEq, voltage));
	    
	    
	}
	
}
