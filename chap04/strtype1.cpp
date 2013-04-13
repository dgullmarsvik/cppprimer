// strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string>
int main()
{
  using namespace std;
  char charr1[20];
  char charr2[20] = "jaguar";
  string str1;
  string str2 = "panther";

  cout << "Enter the name of a feline: ";
  cin >> charr1;
  cout << "Enter the name of another feline: ";
  cin >> str1;
  cout << "Here are som felines:\n";
  cout << charr1 << " " << charr2 << " "
       << str1 << " " << str2 << endl;
  cout << "The third letter in " << charr2 << " is "
       << charr2[2] << endl;
  cout << "The third letter in " << str2 << " is "
       << str2[2] << endl;

  return 0;
}
