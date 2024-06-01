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
  int a;
  cin >> a;

  while (a >= 10)
    a /= 10;

  if (a & 1)
    cout << "ODD";
  else
    cout << "EVEN";

  return 0;
}