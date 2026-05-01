#include <iostream>

using namespace std;

int main()
{
  cout << "A && B = C" << endl;
  cout << "0 && 0 = " << (0 && 0) << endl;
  cout << "1 && 0 = " << (1 && 0) << endl;
  cout << "1 && 1 = " << (1 && 1) << endl;
  cout << "0 && 1 = " << (0 && 1) << endl;
  cout << "----------" << endl;

  cout << "A || B = C" << endl;
  cout << "0 || 0 = " << (0 || 0) << endl;
  cout << "1 || 0 = " << (1 || 0) << endl;
  cout << "1 || 1 = " << (1 || 1) << endl;
  cout << "0 || 1 = " << (0 || 1) << endl;
  cout << "----------" << endl;

  cout << "!A = C" << endl;
  cout << "!0 = " << !0 << endl;
  cout << "!1 = " << !1 << endl;

  return 0;
}
