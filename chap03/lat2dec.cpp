// lat2dec.cpp
//
#include <iostream>

int main()
{
  using namespace std;
  const float minutesPerArch = 60;
  const float secondsPerArch = 3600;


  cout << "Enter a latitude in degs, mins and secs:" << endl;
  cout << "First, enter the degress: ";
  int degrees;
  cin >> degrees;
  cout << "Second, enter the minutes: ";
  int minutes;
  cin >> minutes;
  cout << "Finally, enter the seconds: ";
  int seconds;
  cin >> seconds;
  
  float floatDegrees = degrees + minutes / minutesPerArch + seconds / secondsPerArch;

  cout << degrees << " degrees, " << minutes << " minutes, "
      << seconds << " seconds = " << floatDegrees << endl;

  return 0;
}
