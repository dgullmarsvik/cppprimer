// excercise01.cpp
#include <iostream>
int main()
{
  using namespace std;

  cout << "What is your first name? ";
  char firstName[20];
  cin.getline(firstName,20);
  cout << "What is your last name? ";
  char lastName[20];
  cin.getline(lastName, 20);
  cout << "What letter grade do you deserve? ";
  char grade;
  cin >> grade;
  cout << "What is your age? ";
  int age;
  cin >> age;

  cout << "Name: " << lastName << ", " << firstName << endl;
  grade += 1;
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age << endl;

  return 0;
}
