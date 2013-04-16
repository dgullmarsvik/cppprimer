// exercise01.cpp
#include <iostream>
#include <cctype>

int main()
{
  using namespace std;
  int digit_count = 0;

  char ch;
  char out_ch;
  cin >> ch;
  while (ch != '@')
  {
    if (isdigit(ch))
    {
      digit_count++;
    }
    else if (isupper(ch))
    {
      out_ch = tolower(ch);
    }
    else if (islower(ch))
    {
      out_ch = toupper(ch);
    }
    else
    {
      out_ch = ch;
    }
    
    cout << out_ch;

    cin >> ch;
  }

  return 0;
}
