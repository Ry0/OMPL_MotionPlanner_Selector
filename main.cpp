#include "MotionPlanner.h"

int main()
{
  MotionPlan::Planning planning("../plot/testcase.dat");
  planning.planWithSimpleSetup();
  planning.OpenGnuplot();
  return 0;
}