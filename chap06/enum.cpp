// enum.cpp -- using enum
#include <iostream>
enum {red, orange, yellow};
int main()
{
  using namespace std;
  cout << "Enter color code (0-2): ";
  int code;
  cin >> code;
  while (code >= red && code <= yellow)
  {
    switch (code)
    {
      case red: cout << "Her lips were red." << endl; break;
      case orange: cout << "Her hair were orange." << endl; break;
      case yellow: cout << "Her shoes were yellow." << endl; break;
    }
    cout << "Enter color code (0-2): ";
    cin >> code;
  }
  cout << "Bye!" << endl;

  return 0
    cout << "Bye!" << endl;
  
  return 0;
}
