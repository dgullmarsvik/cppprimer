// exercise08.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main()
{
  using namespace std;

  char filename[SIZE] = "input.txt";
  ifstream inFile;

  inFile.open(filename);
  if (!inFile.is_open())
  {
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  char ch;
  int count = 0;
  while (inFile.good())
  {
    inFile >> ch;
    if (!inFile.eof())
      count++;
  }

  cout << count << " characters in file." << endl;

  return 0;
}
