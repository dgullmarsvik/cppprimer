// strgfun.cpp -- functions with a string argument
#include <iostream>
unsigned int c_in_str(const char *str, char ch);
int main()
{
  using namespace std;
  char mmm[15] = "minimum";

  char *wall = "ululate";

  unsigned int ms = c_in_str(mmm, 'm');
  unsigned int us = c_in_str(wall, 'u');

  cout << ms << " m characters in " << mmm << "\n";
  cout << us << " u charactes in " << wall << "\n";

  return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
  unsigned int count = 0;

  while (*str)
  {
    if (*str == ch)
      ++count;
    ++str;
  }
  return count;
}
