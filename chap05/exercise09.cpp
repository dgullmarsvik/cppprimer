// exercise09.cpp
#include <iostream>
#include <string>

int main()
{
  using namespace std;

  cout << "Enter words (to stop, type the word done): ";
  string word = "";
  int count = 0;
  while (word != "done")
  {
    cin >> word;
    count++;
  }

  cout << "You entered a total of " << (count - 1) << " words" << endl;

  return 0;
}
