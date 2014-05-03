// degrees2fahrenheit -- converts degress to fahrenheit
//
#include <iostream>

double deg2fahr(double);

int main()
{
  using namespace std;

  cout << "Enter temperature in degrees: ";
  double degrees;
  cin >> degrees;
  cout << degrees << " is " << deg2fahr(degrees) << " in fahrenheit." << endl;
  return 0;
}

double deg2fahr(double degrees)
{
  return 1.8 * degrees + 32;
}
