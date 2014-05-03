// exercise05.cpp
#include <iostream>
#include <climits>

long double calculate_factorial(const int);

int main()
{
  using namespace std;

  int n = 0; 
  while (n >= 0)
  {
    cout << "Enter a positive integer (enter a negative integer to quit): ";
    while (!(cin >> n))
    {
      cout << "\nThat's not a positive integer, try again: ";
      cin.clear();
      cin.ignore(INT_MAX, '\n');
    }
    if (n >= 0)
    {
      cout << "The factorial for " << n << " is: " << calculate_factorial(n) << "\n";
    }
  }
  cout << "Bye!" << endl;

  return 0;
}

long double calculate_factorial(const int n)
{
  if (n == 0)
    return 1;

  return n * calculate_factorial(n - 1);
}
