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
  int a, b;
  char c;
  cin >> a >> c >> b;

  char op;

  if (a > b)
    op = '>';
  else if (a < b)
    op = '<';
  else
    op = '=';
  
  if (op == c)
    cout << "Right";
  else 
    cout << "Wrong";
  return 0;
}