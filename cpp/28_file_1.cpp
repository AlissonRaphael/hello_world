#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream my_file;

  my_file.open("test.txt");

  if (my_file.good())
  {
    cout << "Successfully read the file.";
  }
  else
  {
    cout << "Error reading file.";
  };

  my_file << "Hello World!";

  my_file.close();

  return 0;
}
