#include "IPR.hpp"

#include <webots/DistanceSensor.hpp>
#include <webots/Robot.hpp>

using namespace webots;

#define OBJECT_NUMBER 4

double oldPosition = 3.00660;
//double gGrabPosition[] = {5.09282, -1.35619, 1.19083, -3.24647, -2.94524, 0.727475, -0.727475};
double gGrabPosition[] = {0, -2.1, 2.1, -2.02, -2.94524, 0.727475, -0.727475};
double gDropPosition[] = {5.09282, 0.00000, 3.08698, -1.34990, -2.82252, 0.727475, -0.727475};

void move4Step(IPR *pp) {
  pp->grabCube(gGrabPosition);
  cout << pp->distanceSensorValue(3) << endl;
  gGrabPosition[0] = 1.5;
  pp->grabCube(gGrabPosition);
  gGrabPosition[0] = 3;
  pp->grabCube(gGrabPosition);
  gGrabPosition[0] = 4.5;
  pp->grabCube(gGrabPosition);
  gGrabPosition[0] = 6.0335;
  pp->grabCube(gGrabPosition);
}


int main(int argc, char **argv) {
  IPR *ipr = new IPR();
  
  ipr->moveToInitPosition();
  cout << ipr->distanceSensorValue(3) << endl;
  move4Step(ipr);
  
  //cout << ipr->motorPosition(0) << endl;
  //ipr->grabCube(gGrabPosition);
  //cout << ipr->motorPosition(0) << endl;
  //ipr->dropCube(gDropPosition);
  //ipr->moveToInitPosition();
  
  delete ipr;
  return 0;
}
