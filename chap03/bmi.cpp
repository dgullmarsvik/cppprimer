// bmi.cpp -- bmi converter
#include <iostream>
#include <cmath>

int main()
{
  using namespace std;

  const int inchesPerFoot = 12;
  const float metersPerInch = 0.0254;
  const float poundsPerKilogram = 2.2;

  cout << "Enter your height in feet: ";
  int feet;
  cin >> feet;
  cout << "Enter the inch part of you height: ";
  int inches;
  cin >> inches;
  inches = inches + feet * inchesPerFoot;
  int heightInMeters = inches * metersPerInch;
  cout << "Enter your weight in pounds: ";
  float pounds;
  cin >> pounds;
  float weightInKilos = pounds / poundsPerKilogram;
  float bmi = weightInKilos / sqrt(heightInMeters);
  cout << "Your BMI is: " << bmi << endl;

  return 0;
}
