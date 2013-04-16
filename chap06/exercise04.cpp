// exercise04.cpp
#include <iostream>
#include <cstring>
const int strsize = 20;
const int ArSize = 3;

struct bop
{
  char fullname[strsize];
  char title[strsize];
  char bopname[strsize];
  int preference;
};

void menu();

int main()
{
  using namespace std;

  bop *bops = new bop[ArSize];
  strcpy(bops[0].fullname, "Davey C");
  strcpy(bops[0].title,"Software Architect");
  strcpy(bops[0].bopname, "DC");
  bops[0].preference =  2;
  strcpy(bops[1].fullname, "Lotus Nilsson");
  strcpy(bops[1].title, "DevOps");
  strcpy(bops[1].bopname, "Hyde");
  bops[1].preference =  1;
  strcpy(bops[2].fullname, "Chris Chris");
  strcpy(bops[2].title, "Software Developer");
  strcpy(bops[2].bopname, "BlackLotus");
  bops[2].preference =  0;

  int pref;
  int temp_pref;
  char ch;
  menu();
  cin >> ch;
  while (ch != 'q')
  {
    switch (ch)
    {
        case 'a':
        case 'A': pref = 0; break;
        case 'b':
        case 'B': pref = 1; break;
        case 'c':
        case 'C': pref = 2; break;
        case 'd':
        case 'D': pref = 3; break;
        default: pref = -1;
    }
    if (pref != -1)
    {
      for (int i = 0; i < ArSize; i++)
      {
        temp_pref = pref == 3 ? bops[i].preference : pref;
        switch (temp_pref)
        {
          case 0: cout << bops[i].fullname << endl; break;
          case 1: cout << bops[i].title << endl; break;
          case 2: cout << bops[i].bopname << endl; break;
          default: cout << "Default: " << bops[i].fullname << endl;
        } 
      }
    }
    else
    {
      cout << "That is not a valid option..." << endl;
    }
    menu();
    cin >> ch;
  }

  delete [] bops;

  return 0;
}

void menu()
{
  using namespace std;
  cout << endl << "Benevolent Order of Programmers Report: " << endl;
  cout << "a) display by name         b) display by title" << endl;
  cout << "c) disply by bopname       d) display by preference" << endl;
  cout << "q) quit" << endl;
  cout << "Enter choice: " << endl;
}
