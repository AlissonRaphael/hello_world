#include <iostream>
#include <string>

using namespace std;

void hello_world()
{
  cout << "Hello World!";
}

void welcome()
{
  cout << "Welcome to C++";
}

void print()
{
  hello_world();
  cout << endl;
  welcome();
}

int main()
{
  print();
  return 0;
}
