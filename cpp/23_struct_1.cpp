#include <iostream>
#include <string>

using namespace std;

struct User {
  int id;
  string email;
  bool active;
};

int main() {
  User user;

  user.id = 1;

  cout<<"Enter the email: ";
  cin>>user.email;

  cout<<"User "<<user.email<<" has the id "<<user.id;

  return 0;
}
