// miles_per_gallon.cpp
#include <iostream>

int main()
{
  using namespace std;

  cout << "How many miles have you driven?";
  double miles;
  cin >> miles;
  cout << "How many gallons have you used?";
  double gallons;
  cin >> gallons;
  cout << "Gallons/mile: " << gallons / miles << endl;

  return 0;
}
