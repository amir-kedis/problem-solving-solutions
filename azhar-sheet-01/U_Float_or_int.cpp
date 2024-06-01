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
  float a;
  cin >> a;
  int b = a;
  if (b == a)
    cout << "int " << b;
  else
    cout << "float " << b << " " << setprecision(3) << a - b;
  
  return 0;
}