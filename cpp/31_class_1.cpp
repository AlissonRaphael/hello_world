#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
  int id;
  bool active;

public:
  string email;
  char gender;

  Account() // constructor
  {
    id = 1;
    email = "";
    gender = 'm';
    active = 0;
  };

  Account(int id, string email, char gender) // contructor
  {
    this->id = id;
    this->email = email;
    this->gender = gender;
    this->active = 0;
  };

  void change_email(string email)
  {
    this->email = email;
  }

  void change_gender(char gender)
  {
    this->gender = gender;
  }

  void activate()
  {
    active = 1;
  }

  void desactivate()
  {
    active = 0;
  }

  string summary(bool show_status = 0, bool show_gender = 0)
  {
    string result = to_string(id) + " | email: " + email;

    if (show_status)
    {
      result += " | status: ";
      if (active)
      {
        result += "active";
      }
      else
      {
        result += "inactive";
      };
    }

    if (show_gender)
    {
      result += " | gender: ";
      if (gender == 'm')
      {
        result += "man";
      }
      else
      {
        result += "woman";
      };
    };

    return result;
  }

  ~Account() // destructor
  {
    cout << endl;
    cout << "Finish Account";
  }
};

int main()
{
  Account my_account(10, "lissy@mail.com", 'f');

  my_account.change_email("jon@mail.com");
  my_account.change_gender('m');
  my_account.activate();

  cout << my_account.summary(1, 1);

  return 0;
};
