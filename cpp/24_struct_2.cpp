#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct User
{
  int id;
  string email;
  char active;
};

int verify()
{
  char value;

  cout << "Continue Registering (y/n)? ";
  cin >> value;

  if (value == 'y')
  {
    return 1;
  }

  return 0;
};

User save(int *id_count)
{
  User user;

  user.id = *id_count;
  *id_count = *id_count + 1;

  cout << "Enther the email: ";
  cin >> user.email;

  cout << "Is active (y/n): ";
  cin >> user.active;

  return user;
};

int main()
{
  int id_count = 1;
  int keep = 1;
  vector<User> users;

  while (keep)
  {
    User user = save(&id_count);
    users.push_back(user);
    keep = verify();
  }

  for (int index = 0; index < users.size(); index++)
  {
    cout << "User " << index + 1 << endl;
    cout << "- id: " << users[index].id << endl;
    cout << "- email: " << users[index].email << endl;
    cout << "- active: " << users[index].active << endl;
  }

  return 0;
}
