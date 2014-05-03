// exercise07.cpp
#include <iostream>
#include <string>
#include <array>
using namespace std;

struct car
{
  string make;
  int build_year;
};

int main()
{
  cout << "How many cars do you wish to catalog? ";
  int num_cars;
  (cin >> num_cars).get();
  car *cars = new car[num_cars];

  for (int i = 0; i < num_cars; i++)
  {
    cout << "Car #" << i + 1 << ":" << endl;
    cout << "Please enter the make: ";
    cin >> cars[i].make;
    cout << "Please enter the year made: ";
    (cin >> cars[i].build_year).get();
  }

  cout << "Here is your collection: " << endl;
  for (int i = 0; i < num_cars; i++)
  {
    cout << cars[i].build_year << " " << cars[i].make << endl;
  }

  delete [] cars;

  return 0;
}
