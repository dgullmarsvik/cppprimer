// exercise03.cpp
#include <iostream>
int main()
{
  using namespace std;
  cout << "Enter numbers: ";
  int input = -1;
  int sum = 0;
  do
  {
    cin >> input;
    sum += input;
    cout << "sum: " << sum << endl;
  } while (input != 0);

  return 0;
}
