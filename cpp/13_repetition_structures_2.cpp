#include <iostream>

using namespace std;

int main() {
  int test = 1;
  int testsNumber;
  float sum;

  cout<<"Number of the tests: ";
  cin>>testsNumber;

  while(test <= testsNumber) {
    float grade;

    cout<<"Grade for test "<<test<<": ";
    cin>>grade;

    sum+=grade;
    test++;
  }

  float avg = sum / testsNumber;
  cout<<"Result: "<<avg;

  return 0;
}
