#include <iostream>

using namespace std;

int main() {
  for(int counterA = 1; counterA <= 10; counterA++) {
    cout<<"Counter: "<<counterA<<endl;
  }

  int counterB = 10;
  while(counterB >= 1) {
    cout<<"Counter: "<<counterB<<endl;
    counterB--;
  }

  return 0;
}
