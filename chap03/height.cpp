// height.cpp 
//
#include <iostream>

int main()
{
  using namespace std;

  const int inchesPerFeet = 4;

  cout << "Enter you height in inches: ___\b\b\b";
  int inches;
  cin >> inches;
  cout << "You are " << inches / inchesPerFeet << " feet, and "
      << inches % inchesPerFeet << " inches" << endl;

  return 0;
}
