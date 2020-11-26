#include <iostream>

#include "functionality.h"

using namespace std;


// adds a resistor to myStack
void addSeries(Stack myStack)
{
    double val;

    cout << "Enter a resistor value: ";
    cin >> val;

    R myRes = R(val);

    myStack.push(myRes);
}

void printStack(Stack myStack)
{

if (myStack.size == 0)
    {
        cout << "The stack is empty!" << endl;
    }
else
    {
        for(int i=0; i < myStack.getSize(); i++)
            {
            myStack.printElem(i);
            }
    }
}
