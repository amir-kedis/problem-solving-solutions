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
  double a;
  int b;
  cin >> a >> b;

  cout << "floor " << a << " / " << b << " = " << floor(a / b) << endl;
  cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << endl;
  cout << "round " << a << " / " << b << " = " << round(a / b) << endl;

  return 0;
}