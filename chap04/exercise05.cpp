// exercise05.cpp
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

  cout << "CandyBar: " << snack.brandName << endl;
  cout << "weight: " << snack.weight << endl;
  cout << "calories: " << snack.calories << endl;

  return 0;
}
