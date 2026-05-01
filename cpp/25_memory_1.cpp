#include <iostream>
#include <string>

using namespace std;

int main()
{
  int id;
  string email;
  float weight;
  char gender;
  bool status;

  cout << sizeof(id) << " bytes" << endl;
  cout << sizeof(email) << " bytes"  << endl;
  cout << sizeof(weight) << " bytes"  << endl;
  cout << sizeof(gender) << " byte"  << endl;
  cout << sizeof(status) << " byte" ;

  return 0;
}
