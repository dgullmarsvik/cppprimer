// exercise07.cpp
#include <iostream>

struct Pizza
{
  char company[30];
  float diameter;
  float weight;
};

int main()
{
  using namespace std;

  Pizza customPizza;
  cout << "Enter the company name for the pizza: ";
  cin.getline(customPizza.company, 30);
  cout << "Enter the diameter for the pizza: ";
  cin >> customPizza.diameter;
  cout << "Enter the weight of the pizza: ";
  cin >> customPizza.weight;
  cout << "Pizza: " << customPizza.company << endl;
  cout << "diameter: " << customPizza.diameter << endl;
  cout << "weight: " << customPizza.weight << endl;

  return 0;
}
