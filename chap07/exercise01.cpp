// exercise01.cpp
#include <iostream>
#include <climits>

double harmonic_mean(int,int);

int main()
{
  using namespace std;

  int x = -1;
  int y = -1;
  while (x != 0 && y != 0)
  {
    cout << "Enter a pair of integers (0 for one of the integers to quit): " << "\n";
    while (!(cin >> x >> y))
    {
      cout << "Only two integers separated by a single space is allowed." << "\n";
    }
    cout << "The harmonic mean for your pair is: " << harmonic_mean(x,y) << "\n";
    cin.clear();
    cin.ignore(INT_MAX, '\n');
  }

  cout << "Bye!" << endl;
  return 0;
}

double harmonic_mean(int x, int y)
{
  return 2.0 * x * y / (x + y);
}
