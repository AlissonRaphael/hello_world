#include <iostream>

int factorial(int number, int *result)
{

  std::cout << number;

  *result = (*result) * number;

  if (number == 1)
  {
    std::cout << " = ";
    std::cout << *result;
    return 0;
  }

  std::cout << " x ";
  factorial(number - 1, result);

  return 0;
}

int main()
{
  int result = 1;
  factorial(5, &result); // 120
  return 0;
}
