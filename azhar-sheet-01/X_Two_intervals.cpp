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
  int i1s, i1e, i2s, i2e;
  cin >> i1s >> i1e >> i2s >> i2e;

  if (i1e < i2s || i2e < i1s)
  {
    cout << -1;
    return 0;
  }
  vector<int> sorted = {i1s, i1e, i2s, i2e};
  sort(sorted.begin(), sorted.end());
  cout << sorted[1] << " " << sorted[2];

  return 0;
}