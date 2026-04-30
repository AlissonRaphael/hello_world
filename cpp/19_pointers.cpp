#include <iostream>

using namespace std;

int main() {
  int number;

  cout<<"Enter the number: ";
  cin>>number;

  cout<<"Content of the number: "<<number<<endl;
  cout<<"Address of the number: "<<&number<<endl;

  int *pointer = &number;

  cout<<"Content of the pointer: "<<*pointer<<endl;
  cout<<"Address of the pointer: "<<&pointer<<endl;

  *pointer = 20;

  cout<<"Content of the updated number: "<<number<<endl;
  cout<<"Content of the updated pointer: "<<*pointer<<endl;

  return 0;
}
