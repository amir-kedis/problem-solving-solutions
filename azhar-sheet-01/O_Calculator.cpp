#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;
int main()
{
  string s;
  cin >> s;

  int a = 0;
  int b = 0;
  char op;

  bool bturn = true;
  int count = 0;
  for (int i = s.length() - 1; i >= 0; i--)
  {
    const char c = s[i];
    if (isdigit(c) && bturn)
      b += (c - '0') * pow(10, count++);
    else if (!isdigit(c))
    {
      op = c;
      count = 0;
      bturn = false;
    }
    if (isdigit(c) && !bturn)
      a += (c - '0') * pow(10, count++);
  }
  switch (op)
  {
  case '*':
    cout << a * b;
    break;
  case '/':
    cout << a / b;
    break;
  case '+':
    cout << a + b;
    break;
  case '-':
    cout << a - b;
    break;

  default:
    break;
  }

  return 0;
}