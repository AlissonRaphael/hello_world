#include <iostream>

using namespace std;

int main() {
  float grade1, grade2;

  cout<<"Grade for test 1: ";
  cin>>grade1;

  cout<<"Grade for test 2: ";
  cin>>grade2;

  float avg = (grade1 + grade2) / 2;

  if (avg >= 7) {
    cout<<"Approved: "<<avg;
  }
  else if (avg >= 5) {
    char makeup_exam;

    cout<<"Result: "<<avg<<", Had to retake the exam"<<endl;
    cout<<"Did you take the makeup exam? (y/n)? ";
    cin>>makeup_exam;

    if (makeup_exam == 'y') {
      float result = 7 - avg;
      cout<<"Needs a score higher than: "<<result;
    } else {
      cout<<"Disapproved without taking the makeup exam: "<<avg;
    }

  }
  else {
    cout<<"Disapproved: "<<avg;
  }
}
