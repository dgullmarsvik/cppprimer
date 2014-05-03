// switch.cpp -- using the switch statement
#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
  showmenu();
  int choice;
  cin >> choice;
  while (choice != 5)
  {
    switch (choice)
    {
      case 1: cout << "\a\n";
              break;
      case 2: report();
              break;
      case 3: cout << "The boss was in all day.\n";
              break;
      case 4: comfort();
              break;
      default: cout << "That's not a choice." << endl;
    }
    showmenu();
    cin >> choice;
  }
  cout << "Bye!" << endl;

  return 0;
}

void showmenu()
{
  cout << "Please enter 1,2,3,4 or 5:" << endl
       << "1) alarm       2) report" << endl
       << "3) alibi       4) comfort" << endl
       << "5) quit" << endl;
}

void report()
{
  cout << "Sales are up! expenses are down!" << endl;
}

void comfort()
{
  cout << "You are the greatest!" << endl;
}
