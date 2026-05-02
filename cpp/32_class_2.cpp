#include <iostream>
#include <string>

using namespace std;

class IO
{
public:
  char decorator;

  IO ()
  {
    this->decorator = '-';
  };

  void set_decorator(char decorator)
  {
    this->decorator = decorator;
  };

  void decorators(int size)
  {
    for (int index = 0; index < size + 6; index++)
    {
      cout << this->decorator;
    };
    cout << endl;
  };

  void print(string message)
  {
    int size = message.size();
    
    this->decorators(size);
    cout << this->decorator << "  " << message << "  " << this->decorator << endl;
    this->decorators(size);
  };
};

int main()
{
  IO io;
  IO *p;

  p = &io;

  io.set_decorator('~');
  io.print("Hello World");

  p->set_decorator('-');
  
  io.print("Welcome to C++");

  p->set_decorator('.');
  p->print("Good bye!");

  return 0;
}
