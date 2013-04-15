// exercise08.cpp
#include <iostream>
#include <cstring>

int main()
{
  using namespace std;

  cout << "Enter words (to stop, type the word done): ";
  char word[20] = "";
  int count = 0;
  while (strcmp(word, "done") != 0)
  {
    cin >> word;
    count++;
  }

  cout << "You entered a total of " << (count - 1) << " words" << endl;

  return 0;
}
