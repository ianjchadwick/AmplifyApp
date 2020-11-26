#ifndef RESISTORS_H
#define RESITORS_H

#include <vector>

using namespace std;

class R
{

public:
  R();
  R(double);
  double getVal() const;
  void assignVal(double);

  double value;

};

#endif
