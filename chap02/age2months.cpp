// age2months.cpp -- converts age to months
//
#include <iostream>

int years2months(int);

int main()
{
  using namespace std;
  cout << "Enter your age in years: ";
  int age;
  cin >> age;
  cout << "Your age in months: " << years2months(age) << endl;
  return 0;
}

int years2months(int age)
{
  return age * 12;
}
