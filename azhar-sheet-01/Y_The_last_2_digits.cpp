#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <iomanip>
#include <vector>

using namespace std;
int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long mul = (a % 100) * (b % 100) % 100;
  mul = (mul * (c % 100)) % 100;
  mul = (mul * (d % 100)) % 100;
  if (mul <= 9)
    cout << "0";
  cout << mul;
  return 0;
}