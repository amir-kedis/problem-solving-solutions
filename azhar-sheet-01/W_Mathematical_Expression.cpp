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
  int a, b, c;
  char opI, eq;

  cin >> a >> opI >> b >> eq >> c;

  int res;

  switch (opI)
  {
  case '+':
    res = a + b;
    break;
  case '-':
    res = a - b;
    break;
  case '*':
    res = a * b;
    break;

  default:
    break;
  }

  if (c == res)
    cout << "Yes";
  else
    cout << res;

  return 0;
}