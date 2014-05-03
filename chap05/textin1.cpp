// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
  using namespace std;
  char ch;
  int count = 0;
  cout << "Enter the characters; enter # to quit:" << endl;
  while (ch != '#')
  {
    cout << ch;
    ++count;
    cin >> ch;
  }

  cout << endl << count << " charachters read." << endl;

  return 0;
}
