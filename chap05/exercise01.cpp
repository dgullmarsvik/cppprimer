// exercise01.cpp
#include <iostream>
int main()
{
  using namespace std;

  cout << "Enter first integer: ";
  int first;
  cin >> first;
  cout << "Enter second integer: ";
  int second;
  cin >> second;

  for (int i = first; i <= second; i++)
  {
    cout << i << endl;
  }

  return 0;
}
