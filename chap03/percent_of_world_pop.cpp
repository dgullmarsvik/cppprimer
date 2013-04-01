// percent_of_world_pop.cpp
#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter the world population: ";
  long long worldPopulation;
  cin >> worldPopulation;
  cout << "Enter the US population: ";
  long long usPopulation;
  cin >> usPopulation;
  float percentOfWorldPopulation = usPopulation / double(worldPopulation);
  cout << "The population of the US is " << percentOfWorldPopulation
      << "% of the world population." << endl;
  return 0;
}
