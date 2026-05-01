#include <iostream>

int main()
{
  int num1;
  int num2;
  int num3;
  char letter1;

  std::cout << "Enter the number 1: ";
  std::cin >> num1;

  std::cout << "Enter the number 2 and letter 1: ";
  std::cin >> num2 >> letter1;

  std::cout << "Number 1 = " << num1 << " and Number 2 = " << num2 << " and letter = " << letter1;

  return 0;
}
