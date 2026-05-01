#include <iostream>
#include <string>

using namespace std;

int main()
{
  int *pointer = new int;

  *pointer = 1000;

  cout << *pointer;

  delete pointer;

  return 0;
}
