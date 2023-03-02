#ifndef calc_h
#define calc_h
#include <math.h>


int checkAnswer();
double fToC(double fTemp);
double cToF(double cTemp);
double getForce(double mass, double acceleration);
double getEnergy(double mass);
double getWork(double mass, double acceleration, double distance);
int checkAgain();
long printRandoms(int lower, int upper,int count);

#endif
