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
  long long a;
  long long b;
  long long c;
  long long d;

  cin >> a >> b >> c >> d;

  long long dif = a*b - c*d;

  cout << "Difference = " << dif;
  
  return 0;
}