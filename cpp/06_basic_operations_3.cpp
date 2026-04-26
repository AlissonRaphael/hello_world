#include <iostream>

int main() {
  int dividend;
  int divisor;

  std::cout<<"Enter the dividend: ";
  std::cin>>dividend;

  std::cout<<"Enter the divisor: ";
  std::cin>>divisor;

  int quotient = dividend / divisor;
  int rest = dividend % divisor;

  std::cout<<"Quotient: "<<quotient<<std::endl;
  std::cout<<"Rest: "<<rest;

  return 0;
}
