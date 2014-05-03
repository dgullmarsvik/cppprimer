// exercise03.cpp
#include <iostream>

void menu();

int main()
{
  using namespace std;
  char ch = 'a';

  while (ch != 'q')
  {
    menu();
    cin >> ch;
    switch (ch)
    {
      case 'c':
      case 'C': cout << "A lion is a carnivore." << endl; break;
      case 'p':
      case 'P': cout << "Mozart was a pianist." << endl; break;
      case 't':
      case 'T': cout << "A maple is a tree." << endl; break;
      case 'g':
      case 'G': cout << "MT:G is a game." << endl; break;
      case 'q':
      case 'Q': cout << "Bye..." << endl; break;
      default: cout << "That is not a valid choice." << endl;
    }
  }

  return 0;
}

void menu()
{
  using namespace std;
  cout << "Please enter one of the following choices: " << endl;
  cout << "c) carnivore         p) pianist" << endl;
  cout << "t) tree              g) game" << endl;
}
