#include <iostream>

int main()
{
  float grade1, grade2;
  int weight1, weight2;

  std::cout << "Grade for test 1: ";
  std::cin >> grade1;

  std::cout << "Weight for test 1: ";
  std::cin >> weight1;

  std::cout << "Grade for test 2: ";
  std::cin >> grade2;

  std::cout << "Weight for test 2: ";
  std::cin >> weight2;

  float gradeTotal = grade1 * weight1 + grade2 * weight2;
  int weightTotal = weight1 + weight2;

  float avg = gradeTotal / weightTotal;

  std::cout << "Result: " << avg;

  return 0;
}
