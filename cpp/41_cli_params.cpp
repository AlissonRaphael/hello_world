#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
  if (argc > 1)
  {
    for (int i = 1; i < argc; i++)
    {
      string param = argv[i];
      cout << param << endl;
    }
  }

  return 0;
}
