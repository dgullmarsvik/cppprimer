// exercise04.cpp
#include <iostream>
int main()
{
  using namespace std;
  float cleo_balance = 100.0;
  float daphne_balance = 100.0;
  int years = 0;
  
  while (cleo_balance <= daphne_balance)
  {
    daphne_balance += 10.0;
    cleo_balance += 0.05*cleo_balance;
    years++;
  }

  cout << "After " << years << " years. Daphne owns $" << daphne_balance
       << " and Cleo owns $" << cleo_balance << endl;

  return 0;
}
