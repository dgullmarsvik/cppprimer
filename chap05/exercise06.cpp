// exercise06.cpp
#include <iostream>
const int Months = 12;
const int Years = 3;

int main()
{
  using namespace std;

  const char *months[Months] = 
  {
    "Jan","Feb","Mar","Apr","May","Jun",
    "Jul","Aug","Sep","Oct","Nov","Dec"
  };
  const int years[Years] = {2010,2011,1012};
  int earnings[Years][Months];

  int input;
  for (int j = 0; j < Years; j++)
  {
    for (int i = 0; i < Months; i++)
    {
      cout << "Enter earnings for " << months[i] << ", " << years[j] << ": ";
      cin >> input;
      earnings[j][i] = input;
    }
  }

  int total_earnings = 0;
  for (int j = 0; j < Years; j++)
  {
    total_earnings = 0;
    for (int i = 0; i < Months; i++)
      total_earnings += earnings[j][i];
    cout << "Total sales, " << years[j] << ": " << total_earnings << endl;
  }

  return 0;
}
