#include <iostream>
#include <string>

using namespace std;

int main()
{
  int *my_pointers = new int[5];

  for (int index = 0; index < 5; index++)
  {
    my_pointers += index; // go to the address

    *my_pointers = (index + 1) * 10;

    my_pointers -= index; // return to the start address
  };

  my_pointers += 2;
  cout << *my_pointers << endl; // 30: value stored in the third pointer

  my_pointers -= 2; // return to the start address

  cout << *my_pointers; // 10: value stored in the first pointer

  return 0;
}
