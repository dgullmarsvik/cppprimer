// lotto.cpp -- probability of winning
#include <iostream>
#include <climits>

unsigned get_unsigned();
long double calculate_probability(unsigned numbers, unsigned picks);

int main()
{
  using namespace std;
  unsigned numbers, picks;

  cout << "Regular picks: \n\tEnter the number of picks: ";
  picks = get_unsigned();
  cout << "\tEnter the highest number for the picks: ";
  numbers = get_unsigned();
  long double probability = calculate_probability(numbers, picks);
  cout << "MEGA BALL picks: \n\tEnter the number of picks: ";
  picks = get_unsigned();
  cout << "\tEnter the highest number for the picks: ";
  numbers = get_unsigned();
  probability *= calculate_probability(numbers, picks);
  cout << "\nThe probability of picking the winning number is 1 in: ";
  cout << probability << endl;

  return 0;    
}

unsigned get_unsigned()
{
  using namespace std;

  unsigned number;
  while (!(cin >> number))
  {
    cout << "\tThat's not a number. \n";
    cout << "\tEnter a positive integer: ";
    cin.clear();
    cin.ignore(INT_MAX, '\n');
  }
  return number;
}

long double calculate_probability(unsigned numbers, unsigned picks)
{
  long double result = 1.0;
  long double n;
  unsigned p;

  for (n = numbers, p = picks; p > 0; n--, p--)
  {
    result = result * n / p;
  }

  return result;
}
