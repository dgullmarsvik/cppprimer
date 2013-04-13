// exercise06.cpp
#include <iostream>
#include <cstring>

struct CandyBar
{
  char brandName[20];
  float weight;
  int calories;
};

int main()
{
  using namespace std;

  CandyBar *candyArray = new CandyBar[3]; 

  strcpy(candyArray[0].brandName, "Snack");
  candyArray[0].weight =  2.3;
  candyArray[0].calories =  350;

  strcpy(candyArray[1].brandName, "Bar");
  candyArray[1].weight =  2.4;
  candyArray[1].calories =  355;

  strcpy(candyArray[2].brandName, "Popcorn");
  candyArray[2].weight =  2.5;
  candyArray[2].calories =  370;

  cout << "CandyBar: " << candyArray[0].brandName << endl;
  cout << "weight: " << candyArray[0].weight << endl;
  cout << "calories: " << candyArray[0].calories << endl << endl;
  cout << "CandyBar: " << candyArray[1].brandName << endl;
  cout << "weight: " << candyArray[1].weight << endl;
  cout << "calories: " << candyArray[1].calories << endl << endl;
  cout << "CandyBar: " << candyArray[2].brandName << endl;
  cout << "weight: " << candyArray[2].weight << endl;
  cout << "calories: " << candyArray[2].calories << endl << endl;

  return 0;
}
