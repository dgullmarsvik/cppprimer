// eu2us_gas_consumtion.cpp
#include <iostream>

int main()
{
  using namespace std;

  const double kilometersPerMile = 100 / 62.14;
  const double litersPerGallon = 3.875;

  cout << "Enter litres/kilometer: ";
  float litresPerKilometer;
  cin >> litresPerKilometer;
  double gallonsPerMile = litresPerKilometer * kilometersPerMile / litersPerGallon;
  cout << "That would equal " << gallonsPerMile << " gallons/mile." << endl;  

  return 0;
}
