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
