// exercise03.cpp
#include <iostream>
#include <cstring>
int main()
{
  using namespace std;

  cout << "Enter your first name: ";
  char firstName[20];
  cin.getline(firstName, 20);
  cout << "Enter your last name: ";
  char lastName[20];
  cin.getline(lastName, 20);
  char fullName[41];
  strcpy(fullName,lastName);
  strcat(fullName, ", ");
  strcat(fullName, firstName);
  cout << "Full name: " << fullName << endl;

  return 0;
}
