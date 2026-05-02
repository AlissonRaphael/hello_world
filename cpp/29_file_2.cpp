#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct User
{
  string name;
  char gender;
};

User create_user()
{
  User user;

  cout << "Enter the name: ";
  cin >> user.name;

  cout << "Enter the gender (m/f): ";
  cin >> user.gender;

  return user;
};

int main()
{
  char should_register = 'y';
  ofstream my_file("users.csv");

  if (!my_file.good())
  {
    return 0;
  };

  my_file << "name,gender" << endl;

  while (should_register == 'y')
  {
    User user = create_user();
    my_file << "\"" << user.name << "\",\"" << user.gender << "\"" << endl;

    cout << "Continue Registering (y/n)? ";
    cin >> should_register;
  };

  my_file.close();

  return 0;
}
