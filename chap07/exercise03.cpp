// exercise03.cpp
#include <iostream>
#include <cstring>

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void display_box_by_value(box);
void display_box_by_address(box&);

int main()
{
  using namespace std;

  box my_box;
  strcpy(my_box.maker, "some dude");
  my_box.height = 1.2;
  my_box.width = 2.4;
  my_box.length = 2.4;
  my_box.volume = my_box.height * my_box.width * my_box.length;

  cout << "Display box by value: \n";
  display_box_by_value(my_box);

  cout << "Display box by address: \n";
  display_box_by_address(my_box);

  return 0;
}

void display_box_by_value(box current_box)
{
  using namespace std;

  cout << "Box maker: " << current_box.maker << "\n";
  cout << "\tHeight: " << current_box.height << "\n";
  cout << "\tWidth: " << current_box.width << "\n";
  cout << "\tLength: " << current_box.length << "\n";
  cout << "\tVolume: " << current_box.volume << "\n";
}

void display_box_by_address(box &current_box)
{
  using namespace std;

  cout << "Box maker: " << current_box.maker << "\n";
  cout << "\tHeight: " << current_box.height << "\n";
  cout << "\tWidth: " << current_box.width << "\n";
  cout << "\tLength: " << current_box.length << "\n";
  cout << "\tVolume: " << current_box.volume << "\n";
}

