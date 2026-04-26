#include <iostream>

using namespace std;

int main() {
  int quantity;

  cout<<"How many do I add up? ";
  cin>>quantity;

  int numbers[quantity];

  for (int index = 0; index < quantity; index++) {
    cout<<"Number "<<index+1<<": ";
    cin>>numbers[index];
  }

  cout<<"Numbers: ";
  for (int position = quantity - 1; position >= 0; position--) {
    cout<<numbers[position]<<" ";
  }

  return 0;
}
