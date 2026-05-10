#include <iostream>

using namespace std;

int main()
{
  float pi = 3.14;
  int pi_number1 = (int)pi;

  cout << pi_number1 << endl; // 3

  char key = 'w';
  int key_code = int(key);

  cout << key_code << endl; // 119

  int pi_number2 = static_cast<int>(pi);

  cout << pi_number1 << endl; // 3

  return 0;
}
