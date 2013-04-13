// exercise04.cpp
#include <iostream>
#include <string>
int main()
{
  using namespace std;

  cout << "Enter your first name: ";
  string firstName;
  getline(cin, firstName);
  cout << "Enter your last name: ";
  string lastName;
  getline(cin, lastName);
  string fullName = lastName + ", " + firstName;
  cout << "Full name: " << fullName << endl;

  return 0;
}
