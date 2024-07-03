#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <vector>

typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
  int r1, r2;
  int c1, c2;
  int d1, d2;
  cin >> r1 >> r2;
  cin >> c1 >> c2;
  cin >> d1 >> d2;

  int x = 1 / 2.0f * (c1 + d1 - r2);
  int y = r1 - x;
  int w = c1 - x;
  int z = d1 - x;

  unordered_set<int> nums;
  nums.insert(x);
  nums.insert(y);
  nums.insert(w);
  nums.insert(z);

  bool inRange = true;
  for (auto el: nums)
    if (el < 1 || el > 9)
      inRange = false;

  if (nums.size() == 4 && inRange)
  {
    cout << x << " " << y << endl;
    cout << w << " " << z << endl;
  } else 
    cout << -1;

  return 0;
}