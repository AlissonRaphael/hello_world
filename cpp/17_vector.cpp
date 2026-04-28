#include <iostream>
#include <vector>
#include <cmath>

int main() {
  std::vector<int> numbers(3);

  std::cout<<"Enter the first numbers."<<std::endl;

  for(int index = 0; index < numbers.size(); index++) {
    std::cout<<"Enter the number "<<index+1<<": ";
    std::cin>>numbers[index];
  }

  std::cout<<std::endl<<"Enter the last numbers."<<std::endl;

  int quantity;

  std::cout<<"How many numbers do you want to compare? ";
  std::cin>>quantity;

  int value;
  std::vector<int> values;

  for (int i = 0; i < quantity; i++) {
    std::cout<<"Enter the number "<<i+1<<": "<<std::endl;
    std::cin>>value;

    for (int j = 0; j < numbers.size(); j++) {
      if (value == numbers[j]) {
        values.push_back(value);
      }
    }
  }

  std::cout<<"Equal numbers."<<std::endl;
  for (int i = 0; i < numbers.size(); i++) {
    std::cout<<values[i]<<" ";
  }

  return 0;
}
