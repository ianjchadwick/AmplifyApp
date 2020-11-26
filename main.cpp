#include <iostream>
#include "functionality.h"

using namespace std;

int main()
{
    Stack myResStack = Stack();
    addSeries(myResStack);
    printStack(myResStack);
    int size = myResStack.size;
    cout << size;

    return 0;
}
