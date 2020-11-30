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

    cout << "Let's create a new parallel group..." << endl;
    Stack newGroup = createParallelGroup();

    cout << "Now we'll add this new group nested inside of the first one..." << endl;

    R newEq = newGroup.equiv();
    myResStack.addResistor(newEq);
    resEq = myResStack.equiv();

    cout << "And here's our new equivalent resistance: " << resEq.value << endl;



    return 0;
}
