// cinfish.cpp -- non-numeric input terminates loop
#include <iostream>
const int Max = 5;
int main()
{
  using namespace std;
  double fish[Max];
  cout << "Please enter weight of your fish." << endl;
  cout << "You may enter up to " << Max << " fish <q to quit>" << endl;
  cout << "fish #1: ";
  int i = 0;
  while (i < Max && cin >> fish[i])
  {
    if (++i < Max)
      cout << "fish #" << i+1 << ": ";
  }
  double total = 0.0;
  for (int j  = 0; j < i; j++)
    total += fish[j];
  if (i == 0)
    cout << "No fish..." << endl;
  else
    cout << total / i << " = average fish weight." << endl;

  return 0;
}
