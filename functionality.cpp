#include <iostream>

#include "functionality.h"

using namespace std;



Stack createParallelGroup()
{
    char ans;
    Stack myResStack;

    do
    {
    myResStack.addResistor();
    cout << "Would you like to add another resistor? (Y/N) ";
    cin >> ans;
    }
    while (ans == 'Y');

    return myResStack;
}
