#include <iostream>

using namespace std;

enum months
{
  January = 1,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December,
};

months operator+(months current_month, int added_month)
{
  int value = (int(current_month) + added_month) % 12;
  return months(value);
}

enum days_of_week
{
  Monday = 2,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  Sunday = 1,
};

int main()
{
  months month;
  days_of_week day;

  month = June;
  cout << month << endl; // 6

  month = months(10);
  cout << month << endl; // 10

  month = month + 4;
  cout << month << endl; // 2

  day = Wednesday;
  cout << day << endl; // 4

  day = Sunday;
  cout << day << endl; // 1

  return 0;
};
