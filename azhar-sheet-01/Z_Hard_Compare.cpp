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
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == 0 || c == 0)
  {
    if (a == 0 && c != 0 && 0 > d * log(c))
      cout << "YES";
    else if (a != 0 && c == 0 && b * log(a) > 0)
      cout << "YES";
    else
      cout << "NO";
    return 0;
  }

  if (b * log(a) > d * log(c))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}