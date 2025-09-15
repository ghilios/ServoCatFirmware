#include <Arduino.h>
#include <sofa.h>
#include <optional>
#include <array>
#include <string_view>
#include <algorithm>

std::optional<int> foo;

// put function declarations here:
int myFunction(int, int);

void setup() {
  foo = 5;
  std::string_view sv("foo");
  sv.length();

  std::array<int, 4> arr = {3, 2, 4, 1};
  auto ints = std::to_array({1, 5, 3, 7}); 
  arr.size();

  std::sort(arr.begin(), arr.end());

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