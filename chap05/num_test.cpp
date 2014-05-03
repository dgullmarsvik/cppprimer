// num_test.cpp -- use numeric test in for loop
#include <iostream>
int main()
{
  using namespace std;

  cout << "Enter the starting coutdown value: ";
  int limit;
  cin >> limit;
  int i;
  for (i = limit; i; i--)
      cout << "i = " << i << endl;
  cout << "Donw now that i = " << i << endl;

  return 0;
}
