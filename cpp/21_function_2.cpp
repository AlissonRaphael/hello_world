#include <iostream>
#include <string>

using namespace std;

int addition(int a, int b)
{
  return a + b;
}

int subtraction(int a, int b)
{
  return a - b;
}

float division(int a, int b)
{
  float result;
  result = float(a) / float(b);
  return result;
}

int multiplication(int a, int b)
{
  return a * b;
}

int main()
{
  int first_number, second_number;

  cout << "Enter the first number: ";
  cin >> first_number;

  cout << "Enter the second number: ";
  cin >> second_number;

  cout << "Addition: " << addition(first_number, second_number) << endl;
  cout << "Subtraction: " << subtraction(first_number, second_number) << endl;
  cout << "Division: " << division(first_number, second_number) << endl;
  cout << "Multiplication: " << multiplication(first_number, second_number);

  return 0;
}
