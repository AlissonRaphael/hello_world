#include <iostream>

int main()
{
  int grade1, grade2;

  std::cout << "Grade for test 1: ";
  std::cin >> grade1;

  std::cout << "Grade for test 2: ";
  std::cin >> grade2;

  float sum = grade1 + grade2;
  float avg = sum / 2;

  std::cout << "Result: " << avg;

  return 0;
}
