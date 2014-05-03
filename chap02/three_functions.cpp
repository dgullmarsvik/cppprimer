// three_functions.cpp -- using three userdefind functions
//
#include <iostream>

void myFirstFunction();
void mySecondFunction();

using namespace std;

int main()
{
  myFirstFunction();
  myFirstFunction();
  mySecondFunction();
  mySecondFunction();
  return 0;
}

void myFirstFunction()
{
  cout << "Three blind mice" << endl;
}

void mySecondFunction()
{
  cout << "See how they run." << endl;
}
