#include <iostream>

using namespace std;

int main()
{
  int age;
  int years, month, days;
  cin >> age;

  years = age / 365;
  month = (age - years * 365) / 30;
  days = age - years * 365 - month * 30;

  cout << years << " years\n";
  cout << month << " months\n";
  cout << days << " days\n";

  return 0;
}