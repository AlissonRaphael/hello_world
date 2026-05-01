#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
  name,gender
  "paul","m"
  "marie","f"
  "jon","m"
*/

int main() {
  bool reading = 1;
  ifstream file;
  string line;

  file.open("users.csv");

  if (!file.good())
  {
    return 0;
  };

  do
  {
    getline(file, line);
    reading = line.length();
    if (reading)
    {
      cout << line << endl;
    }
  }
  while (reading);


  return 0;
}
