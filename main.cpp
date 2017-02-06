#include "MotionPlanner.h"

int main()
{
  Planning planning("../plot/testcase.dat");
  planning.planWithSimpleSetup();
  planning.OpenGnuplot();
  return 0;
}