#include <iostream>

using namespace std;

void add(int *base);
void sub(int *base);

int main() {
  int number = 0;

  add(&number);
  sub(&number);

  cout<<number;

  return 0;
}

void add(int *base) {
  int increment;

  cout<<"Add: ";
  cin>>increment;

  *base = *base + increment;
}

void sub(int *base) {
  int decrement;

  cout<<"Sub: ";
  cin>>decrement;

  *base = *base - decrement;
}
