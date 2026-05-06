#include <iostream>

class Quantity
{
public:
  int qtd;

  Quantity()
  {
    this->qtd = 0;
  };

  void print()
  {
    std::cout << "Quantity: " << this->qtd << std::endl;
  };

  Quantity& operator+(int i)
  {
    this->qtd += i;
    return *this;
  };

  Quantity& operator-(int i)
  {
    this->qtd -= i;
    return *this;
  };
};

int main()
{
  Quantity quantity;

  quantity + 2 + 3;
  quantity.print();
  quantity + 10;
  quantity - 4;
  quantity.print();

  return 0;
};
