// or.cpp -- using the logical OR operator
#include <iostream>
int main()
{
  using namespace std;
  cout << "This program may reformat you hard disk" << endl;
  cout << "and destroy all your data." << endl;
  cout << "Do you wish to continue? <y/n> ";
  char ch;
  cin >> ch;
  if (ch == 'y' || ch == 'Y')
    cout << "You were warned!\a\a\n";
  else if (ch == 'n' || ch == 'N')
    cout << "A wise choice... bye\n";
  else
    cout << "Please enter <y/n>\n";

  return 0;
}
