#include <iostream>

int main() {
  int number;
  int increment;

  std::cout<<"Enter the number: ";
  std::cin>>number;

  std::cout<<"Enther the increment: ";
  std::cin>>increment;

  number++; // number = number + 1
  std::cout<<"The number incremented by 1 is "<<number<<std::endl;

  number+=5; // number = number + 5
  std::cout<<"The number incremented by 5 is "<<number<<std::endl;

  number--; // number = number - 1
  std::cout<<"The number decremented by 1 is "<<number<<std::endl;

  number-=3; // number = number - 3
  std::cout<<"The number decremented by 3 is "<<number<<std::endl;

  number*=2; // number = number * 2
  std::cout<<"The number folded is "<<number<<std::endl;

  number/=2; // number = number / 2
  std::cout<<"Half the number is "<<number<<std::endl;

  number+=increment; // number = number + increment
  std::cout<<"The number incremented by increment is "<<number;

  return 0;
}
