// exercise06.cpp
#include <iostream>
const int strlength = 20;

struct contribution
{
  char contributor[strlength];
  double amount;
};

int get_number_of_contributions();
contribution* get_contributions(int);
void print_contributions(contribution*,int);
void print_patrons(contribution*, int, const char*, double, double);

int main()
{
  using namespace std;

  int number_of_contributions = get_number_of_contributions();
  contribution *contributions = get_contributions(number_of_contributions);

  print_contributions(contributions, number_of_contributions);

  delete [] contributions;

  return 0;
}

int get_number_of_contributions()
{
  using namespace std;

  cout << "Enter the number of contributions: ";
  int number_of_contributions = 0;
  (cin >> number_of_contributions).get();

  return number_of_contributions;
}

contribution* get_contributions(int number_of_contributions)
{
  using namespace std;

  contribution *contributions = new contribution[number_of_contributions];
  for (int i = 0; i < number_of_contributions; i++)
  {
    cout << "Enter the name of contributor #" << i + 1 << ": ";
    cin >> contributions[i].contributor;
    cout << "Enter the amount: $";
    (cin >> contributions[i].amount).get();  
  }

  return contributions;
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
