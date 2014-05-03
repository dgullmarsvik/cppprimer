// format_hours.cpp -- displays formatted time
//
#include <iostream>

void formatTime(int,int);

int main()
{
  using namespace std;
  cout << "Enter the hour: ";
  int hour;
  cin >> hour;
  cout << "Enter the minutes: ";
  int minutes;
  cin >> minutes;
  cout << "The current time is: ";
  formatTime(hour,minutes);
  return 0;
}

void formatTime(int hour, int minutes)
{
  using namespace std;
  cout << hour << ":" << minutes << endl;
}
