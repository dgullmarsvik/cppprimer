// furlong2yards.cpp -- converts furlongs to yards

#include <iostream>
int main()
{
  using namespace std;

  cout << "Enter distance in furlongs: ";
  double furlong;
  cin >> furlong;
  cout << furlong << " furlongs is " << furlong * 220 << " yards." << endl;
  return 0;
}
