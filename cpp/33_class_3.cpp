#include <iostream>
#include <string>

using namespace std;

class User
{
private:
  int id;

public:
  string name;

  User()
  {
    this->id = 0;
    this->name = "";
  };

  User(string name)
  {
    this->id = 1;
    this->name = name;
  };

  string summary()
  {
    return to_string(this->id) + " " + this->name;
  };

  ~User()
  {
    cout << endl << "Clean!" << endl;
  }
};

int main()
{
  User *user;

  user = new User("Jon");

  cout << user->name;

  delete user;

  cout << "Finish!";

  return 0;
};
