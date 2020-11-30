#include <iostream>
#include <vector>
#include "Stack.h"

using namespace std;

// Sets size to 0 and creates an empty vector of resistor objects
Stack::Stack()
{
  size = 0;
  vector<R> resVec;
}


// Returns true if size is 0, false if not.
bool Stack::isEmpty() const
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
R Stack::getElem(int i) const
{
    return this->elements.at(i);
}

// print Stack element at i
void Stack::printElem(int i) const
{

    cout << this->elements.at(i).value << endl;
}

// Pushes newRes onto stack if the size is less than 25.
void Stack::push(R newRes)
{
  //if (this->size < 25)
    //{
    this->elements.push_back(newRes);
    this->size = (this->size + 1);
    //}
  //else
    //{
    //return;
    //}
}

// Pops top element off stack.
R Stack::pop() {
  if (size != 0)
    {
    return elements[--size];
    }
  else
    {
	return -1;
    }
}

// Returns the size of the stack.
int Stack::getSize()
    {
    return this->size;
    }

//This function is important. You call it on a vector of resistor objects and get back
//a single resistor object, aka the equivalent resistance.
R Stack::equiv()
{
    double sum = 0;
    int count = 0;
    double rEq;

    if (this->size == 1)
    {
        return this->elements.at(0);
    }
    else
    {
        for (int i = 0; i < this->size; i++)
        {
        sum = sum + (1 / this->elements.at(i).value);
        count++;
        }
    }

    rEq = (1 / sum);
    R rEqObj = R(rEq);

    return rEqObj;
}

void Stack::addResistor()
{
    double val;

    cout << "Enter a resistor value: ";
    cin >> val;

    R myRes = R(val);

    push(myRes);
}

void Stack::printStack()
{

if (this->size == 0)
    {
        cout << "The stack is empty!" << endl;
    }
else
    {
        for(int i=0; i < this->size; i++)
            {
            cout << this->elements.at(i).value << endl;
            }
    }
}
