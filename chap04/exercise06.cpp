// exercise06.cpp
#include <iostream>

struct CandyBar
{
  char brandName[20];
  float weight;
  int calories;
};

int main()
{
  using namespace std;

  CandyBar snack =
  {
    "Mocha Munch",
    2.3,
    350
  };

  CandyBar chocolateBar = 
  {
    "Chocolate Bar",
    3.4,
    400
  };

  CandyBar popcorn = 
  {
    "Popcorn",
    10,
    100
  };

  cout << "CandyBar: " << snack.brandName << endl;
  cout << "weight: " << snack.weight << endl;
  cout << "calories: " << snack.calories << endl << endl;

  cout << "CandyBar: " << chocolateBar.brandName << endl;
  cout << "weight: " << chocolateBar.weight << endl;
  cout << "calories: " << chocolateBar.calories << endl << endl;

  cout << "CandyBar: " << popcorn.brandName << endl;
  cout << "weight: " << popcorn.weight << endl;
  cout << "calories: " << popcorn.calories << endl << endl;

  return 0;
}
