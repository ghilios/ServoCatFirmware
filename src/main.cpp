#include <Arduino.h>
#include <sofa.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  int year = 2025;
  int month = 9;
  int day = 14;

  double djm0;
  double djm;

  int status_cal2jd;
  int status_jd2cal;

  int out_year, out_month, out_day;
  double out_fraction;

  status_cal2jd = iauCal2jd(year, month, day, &djm0, &djm);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}