// seconds2days.cpp
//
#include <iostream>

int main()
{
  using namespace std;

  const int hoursPerDay = 24;
  const int minutesPerHour = 60;
  const int secondsPerMinute = 60;

  cout << "Enter the number of seconds: ";
  long long seconds;
  cin >> seconds;
  long days = seconds / (hoursPerDay * minutesPerHour * secondsPerMinute);
  long long restSeconds = seconds % (hoursPerDay * minutesPerHour * secondsPerMinute);
  long hours = restSeconds / (minutesPerHour * secondsPerMinute);
  restSeconds = restSeconds % (minutesPerHour * secondsPerMinute);
  long minutes = restSeconds / secondsPerMinute;
  restSeconds = restSeconds % secondsPerMinute;
  cout << seconds << " seconds = " << days << " days, " << hours
      << " hours, " << minutes << " minutes, " << restSeconds
      << " seconds." << endl;

  return 0;
}
