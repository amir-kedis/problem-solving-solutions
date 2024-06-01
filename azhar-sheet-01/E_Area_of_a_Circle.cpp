#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
  cout << fixed << setprecision(9);

  double r;
  cin >> r;

  const double PI = 3.141592653;

  cout << PI * r * r;

  return 0;
}