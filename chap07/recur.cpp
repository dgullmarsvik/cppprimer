// recur.cpp -- using recursion
#include <iostream>
void countdown(int n);

int main()
{
  countdown(4);

  return 0;
}

void countdown(int n)
{
  using namespace std;
  cout << n << "\n";
  if (n >= 1)
    countdown(n - 1);

  cout << "Kaboom!\n";
}
