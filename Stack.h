#ifndef STACK_H
#define STACK_H

#include "Resistor.h"
#include <vector>

class Stack {
public:
  Stack();
  bool isEmpty() const;
  R getElem(int) const;
  void printElem(int i) const;
  void push(R newRes);
  R pop();
  int getSize();

    vector<R> elements;
    int size;
};

#endif
