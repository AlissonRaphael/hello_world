#include <iostream>

using namespace std;

int main()
{
  float sum;
  char close;

  do
  {
    float number;

    cout << "Number to sum: ";
    cin >> number;

    sum += number;

    cout << "Exit (y/n)? ";
    cin >> close;
  } while (close == 'n');

  cout << "Result: " << sum;

  return 0;
}
