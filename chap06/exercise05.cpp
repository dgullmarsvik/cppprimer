// exercise05.cpp
#include <iostream>
const int TAX_LIMITS = 3;

int main()
{
  using namespace std;

  double tax_limit_tresholds[TAX_LIMITS] = {5000, 15000, 35000};
  double tax_limit_rates[TAX_LIMITS] = {0.1, 0.15, 0.2};

  double tax_due;
  double taxable_income;
  cout << "Enter your income: " << endl;
  while (cin >> taxable_income && taxable_income > 0)
  {
    tax_due = 0.0;
    for (int i = TAX_LIMITS - 1; i >= 0; i--)
    {
      if (taxable_income > tax_limit_tresholds[i])
      {
        tax_due += (taxable_income - tax_limit_tresholds[i]) * tax_limit_rates[i];
        taxable_income = tax_limit_tresholds[i];
      }
    }
    cout << endl << "Your tax due is: $" << tax_due << endl << endl;
    cout << "Enter your income: $";
  }

  return 0;
}
