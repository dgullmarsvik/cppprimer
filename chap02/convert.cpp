// convert.cpp -- converts stone to pound
#include <iostream>

int stonetolb(int);

int main()
{
  using namespace std;
  int stone;
  cout << "Enter the weight in stone: ";
  cin >> stone;
  int pounds = stonetolb(stone);
  cout << stone << " stone = " << pounds << " lb." << endl;
  return 0;
}

int stonetolb(int sts)
{
  return 14 * sts;
}
