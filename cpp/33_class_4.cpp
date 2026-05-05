#include <iostream>

using namespace std;

class Employee
{
private:
  string type = "Employee";
protected:
  int id;
public:
  float salary;

  Employee(float salary)
  {
    this->salary = salary;
  }

  void print()
  {
    cout << this->type << " - " << this->salary << endl;
  }

};

class Manager: public Employee
{
private:
  string type = "Manager";
public:
  float plr;

  Manager(float salary, float plr) : Employee(salary)
  {
    this->plr = plr;
  }

  void print()
  {
    cout << this->type << " - " << this->salary << " x " << this->plr << endl;
  }
};

int main() {
  Manager manager(10000.0, 1.05);

  manager.Employee::print();
  manager.print();

  return 0;
}
