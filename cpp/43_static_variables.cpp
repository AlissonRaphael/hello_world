#include <iostream>

int count()
{
  static int value = 0;
  value++;
  std::cout << value << std::endl;
  return value;
}

int main()
{
  count(); // 1
  count(); // 2
  count(); // 3
  return 0;
}
