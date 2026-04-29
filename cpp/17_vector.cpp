#include <iostream>
#include <vector>
#include <cmath>

int main() {
  std::vector<int> first_numbers(3);
  std::vector<int> last_numbers;
  std::vector<int> equals;

  std::cout<<"Enter the first numbers.";
  std::cout<<std::endl;

  for (int i = 0; i < first_numbers.size(); i++) {
    std::cout<<"Enter the number "<<i+1<<": ";
    std::cin>>first_numbers[i];
  }

  std::cout<<std::endl;

  int quantity;
  std::cout<<"How many numbers do you want to compare? ";
  std::cin>>quantity;

  std::cout<<std::endl;

  std::cout<<"Enter the last numbers.";
  std::cout<<std::endl;

  int value;
  for (int i = 0; i < quantity; i++) {
    std::cout<<"Enter the number "<<i+1<<": ";
    std::cin>>value;
    last_numbers.push_back(value);

    for (int j = 0; j < first_numbers.size(); j++) {
      if (value == first_numbers[j]) {
        equals.push_back(value);
      }
    }
  }

  std::cout<<std::endl;
  std::cout<<"First numbers: ";
  for (int i = 0; i < first_numbers.size(); i++) {
    std::cout<<first_numbers[i]<<" ";
  }

  std::cout<<std::endl;
  std::cout<<"Last numbers: ";
  for (int i = 0; i < last_numbers.size(); i++) {
    std::cout<<last_numbers[i]<<" ";
  }

  std::cout<<std::endl;
  std::cout<<"Equal numbers: ";
  for (int i = 0; i < equals.size(); i++) {
    std::cout<<equals[i]<<" ";
  }

  return 0;
}
