// strgback.cpp -- a function that returns a pointer to char
#include <iostream>
char *buildstr(char c, int n);
int main()
{
  using namespace std;
  int times;
  char ch;

  cout << "Enter at character: ";
  cin >> ch;
  cout << "Enter an integer: ";
  cin >> times;
  char *ps = buildstr(ch, times);
  cout << ps << "\n";
  delete [] ps;
  ps = buildstr('+', 20);
  cout << ps << "-DONE-" << ps << "\n";
  delete [] ps;
  return 0;
}

char * buildstr(char c, int n)
{
  char *pstr = new char[n + 1];
  pstr[n] = '\0';
  while (n-- > 0)
    pstr[n] = c;
  return pstr;
}
