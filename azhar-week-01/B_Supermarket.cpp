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
  int n, m;
  cin >> n >> m;

  vector<double> prices = vector<double>(n, 0.0);
  for (int i = 0; i < n; ++i)
  {
    int x, y;
    cin >> x >> y;
    prices[i] = x / double(y);
  }
  double minE = prices[0];

  for (auto el : prices)
    minE = min(minE, el);

  cout << setprecision(9) << m * minE;
  return 0;
}