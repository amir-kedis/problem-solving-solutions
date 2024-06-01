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
  int a, b ,c;
  int maxE, minE;

  cin >> a >> b >> c;

  maxE = max(a, max(b,c));
  minE = min(a, min(b,c));

  cout << minE << " " << maxE;
  
  return 0;
}