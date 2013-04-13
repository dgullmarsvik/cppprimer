// exercise10.cpp
#include <iostream>
#include <array>

int main()
{
  using namespace std;

  array<float, 3> dashTimes;
  cout << "Enter the first time: ";
  cin >> dashTimes[0];
  cout << "Enter the second time: ";
  cin >> dashTimes[1];
  cout << "Enter the third time: ";
  cin >> dashTimes[2];

  cout << "1st: " << dashTimes[0] << ", 2nd: " << dashTimes[1]
       << ", 3rd: " << dashTimes[2] << endl;
  cout << "Average: " << (dashTimes[0] + dashTimes[1] + dashTimes[2])/3 << endl;

  return 0;
}
