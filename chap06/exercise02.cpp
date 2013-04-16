// exercise02.cpp
#include <iostream>
const int ArSize = 10;

int main()
{
  using namespace std;
  double *donations = new double[ArSize];
  double donation;

  int i;
  cout << "Enter the first donation: " << endl;
  for (i = 0; i < 10 && cin >> donation; i++)
  {
    donations[i] = donation;
    cout << "Enter the next donation: " << endl;
  }

  double sum = 0.0;
  for (int j = 0; j < i; j++)
  {
    sum += donations[j];
  }

  cout << i << " donations were made. Average donation: "
       << sum / i << endl;

  cout << "The following donations were larger than average: " << endl;
  bool firstDonation = true;
  for (int j = 0; j < i; j++)
  {
    if (donations[j] > (sum / i))
    {
      if (!firstDonation)
      {
        cout << ", ";
      }
      firstDonation = false;
      cout << donations[j];
    }
  }
  cout << endl;

  return 0;
}
