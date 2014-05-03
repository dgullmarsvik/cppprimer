// exercise05.cpp
#include <iostream>
const int Months = 12;

int main()
{
  using namespace std;

  const char *months[Months] = 
  {
    "Jan","Feb","Mar","Apr","May","Jun",
    "Jul","Aug","Sep","Oct","Nov","Dec"
  };
  int earnings[Months];

  int input;
  for (int i = 0; i < Months; i++)
  {
    cout << "Enter earnings for " << months[i] << ":";
    cin >> input;
    earnings[i] = input;
  }

  int total_earnings = 0;
  for (int i = 0; i < Months; i++)
    total_earnings += earnings[i];

  cout << "Total sales: " << total_earnings << endl;

  return 0;
}
