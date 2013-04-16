// exercise09.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
const int strlength = 20;
const char filename[30] = "contributions.txt";

struct contribution
{
  string contributor;
  double amount;
};

void print_contributions(contribution*,int);
void print_patrons(contribution*, int, const char*, double, double);

int main()
{
  using namespace std;

  ifstream inFile;
  inFile.open(filename);
  if (!inFile.is_open())
  {
    cout << "Could not open the file " << filename << endl;
    cout << "Terminating program." << endl;
    exit(EXIT_FAILURE);
  }

  int number_of_contributions = 0;
  (inFile >> number_of_contributions).get();
  int index = 0;
  contribution *contributions = new contribution[number_of_contributions];
  while (inFile.good() && index < number_of_contributions)
  {
    getline(inFile, contributions[index].contributor);
    (inFile >> contributions[index].amount).get();
    index++;
  }

  print_contributions(contributions, number_of_contributions);

  delete [] contributions;

  return 0;
}

void print_contributions(contribution* contributions,int number_of_contributions)
{
  using namespace std;

  int patron_count = 0;
  if (number_of_contributions > 0)
  {
    print_patrons(contributions, number_of_contributions, "Grand Patrons", 10000, 100000000);
    print_patrons(contributions, number_of_contributions, "Patrons", 0, 9999);
  }
  else
  {
    cout << "There were no contributions... :(" << endl;
  }
}

void print_patrons(contribution* contributions, int array_size, const char *title, double min_amount, double max_amount)
{
    using namespace std;

    int patron_count = 0;
    cout << endl << title << ": " << endl;
    for (int i = 0; i < array_size; i++)
    {
      if (contributions[i].amount >= min_amount && contributions[i].amount <= max_amount)
      {
        cout << "\t" << contributions[i].contributor << ": $"; 
        cout << contributions[i].amount << endl;
        patron_count++;
      }
    }
    if (patron_count <= 0)
    {
      cout << "None..." << endl;
    }
}
