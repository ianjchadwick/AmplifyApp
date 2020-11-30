#include <iostream>
#include "functionality.h"

using namespace std;

int main()
{
    Stack myResStack = createParallelGroup();
    //myResStack.addResistor();

    cout << "Here's what you just created: " << endl;
    myResStack.printStack();

    cout << "Here's it's equivalent resistance: ";
    R resEq = myResStack.equiv();
    cout << resEq.value;

    return 0;
}
