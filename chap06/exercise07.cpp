// exercise07.cpp
#include <iostream>
#include <cctype>
#include <string>
int main()
{
  using namespace std;

  cout << "Enter words (q to quit): ";
  string str;
  char ch;
  int vowel_word_count = 0;
  int consonant_word_count = 0;
  int other_word_count = 0;
  bool new_word = true;
  bool done = false;
  while (!done && getline(cin, str))
  {
    new_word = true;
    for (int i = 0; i < str.length(); i++)
    {
      ch = str[i];
      if (ch == 'q')
      {
        done = true;
        break;
      }
      if (isspace(ch))
      {
        new_word = true;
      }
      else if (!isspace(ch) && new_word)
      {
        new_word = false;
        if (isalpha(ch))
        {
          switch (ch)
          {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 'y':
            case 'Y': vowel_word_count++; break;
            default: consonant_word_count++;
          }
        }
        else
        {
          other_word_count++;
        }
      }
    }
  }

  cout << vowel_word_count << " words beginning with vowels" << endl;
  cout << consonant_word_count << " words beginning with consonants" << endl;
  cout << other_word_count << " others" << endl;

  return 0;
}
