package test_package;

import java.util.Scanner;
import java.util.Vector;

public class Stack
{

//instance variables
Vector<R> elements;
int size;

// constructor sets size to 0 and creates an empty vector of resistor objects
public Stack()
{
  this.size = 0;
  Vector<R> resVec = new Vector<R>();
  this.elements = resVec;
}


// Returns true if size is 0, false if not.
public boolean isEmpty()
{
  if (size == 0)
    {
    return true;
    }
  else
    {
    return false;
    }
}

// vector at function, but for Stack
public R getElem(int i)
{

    return this.elements.get(i);
}

// print Stack element at i
public void printElem(int i)
{

    System.out.println(this.elements.get(i));
}

// Pushes newRes onto stack if the size is less than 25.
public void push(R newRes)
{
    this.elements.add(newRes);
    this.size = this.size + 1;
}

// Returns the size of the stack.
public int getSize()
    {
    return this.size;
    }

//This function is important. You call it on a vector of resistor objects and get back
//a single resistor object, aka the equivalent resistance.
public R equiv()
{
    double sum = 0;
    int count = 0;
    double rEq;

    if (this.size == 1)
    {
        return this.elements.get(0);
    }
    else
    {
        for (int i = 0; i < this.size; i++)
        {
        sum = sum + (1 / this.elements.get(i).value);
        count++;
        }
    }

    rEq = (1 / sum);
    R newReq = new R(rEq);

    return newReq;
}

public void addResistor()
{
    double val;

    System.out.println("Enter a resistor value: ");
    Scanner s = new Scanner(System.in);
    val = s.nextDouble();

    R myRes = new R(val);

    push(myRes);
}

public void addResistor(R myRes)
{
    push(myRes);
}


void printStack()
{

if (this.size == 0)
    {
        System.out.println("The stack is empty!");
    }
else
    {
        for (int i=0; i < this.size; i++)
            {
            System.out.println(this.elements.get(i).value);
            }
    }
}

}
