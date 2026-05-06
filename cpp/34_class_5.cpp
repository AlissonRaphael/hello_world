#include <iostream>
#include <string>

using namespace std;

class Position
{
  friend class Add;
  friend class Sub;
  friend void print(Position *position);
public:
  int x, y;
  Position(int x, int y)
  {
    this->x = x;
    this->y = y;
  };
};

class Add
{
public:
  void add(Position *position)
  {
    position->x++;
    position->y++;
  };
};

class Sub
{
public:
  void sub(Position *position)
  {
    position->x--;
    position->y--;
  };
};

void print(Position *position)
{
  cout << "f(" << position->x << ", " << position->y << ")" << endl;
}

int main()
{
  Position pos(3, 4);
  Add sum;
  Sub minus;

  print(&pos);

  sum.add(&pos);
  sum.add(&pos);
  print(&pos);

  minus.sub(&pos);
  minus.sub(&pos);
  minus.sub(&pos);
  minus.sub(&pos);
  print(&pos);

  return 0;
};
