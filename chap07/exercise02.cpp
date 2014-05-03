// exercise02.cpp
#include <iostream>
const int MAX_GOLF_ROUNDS = 10;

int* get_golf_scores(int*, int);
void display_golf_scores(int*, int);
float get_average_score(int*, int);

int main()
{
  using namespace std;

  cout << "Enter " << MAX_GOLF_ROUNDS << " golf scores, enter the first score " 
      << "(0 to quit): ";
  int *golf_scores = new int[MAX_GOLF_ROUNDS];
  get_golf_scores(golf_scores, MAX_GOLF_ROUNDS);
  display_golf_scores(golf_scores, MAX_GOLF_ROUNDS);
  cout << "Your average was: " << get_average_score(golf_scores, MAX_GOLF_ROUNDS) << endl;

  delete [] golf_scores;

  return 0;
}

int* get_golf_scores(int* golf_scores, int max)
{
  using namespace std;

  int score = -1;
  for (int i = 0; i < max; i++)
  {
    while (!(cin >> score))
    {
      cout << "That's not a golf score!" << "\n";
      cout << "Enter an integer golf score: " << "\n";
    }
    golf_scores[i] = score;
    
    if (score == 0)
      break;
    
    cout << "Enter the next score (0 to quit): ";
  }
}

void display_golf_scores(int* golf_scores, int max)
{
  using namespace std;

  cout << "Your score was: ";
  for (int i = 0; i < max; i++)
  {
    if (golf_scores[i] == 0)
      break;

    cout << golf_scores[i] << " ";
  }
  cout << "\n";
}

float get_average_score(int* golf_scores, int max)
{
  int sum = 0.0;
  int i;
  for (i = 0; i < max; i++)
  {
    if (golf_scores[i] == 0)
      break;

    sum += golf_scores[i];
  }

  return sum / float(i);
}
