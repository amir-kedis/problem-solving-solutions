#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
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
  int cap;
  vector<int> plants(4, 0);

  cin >> cap;
  for (int i = 0; i < 4; ++i)
    cin >> plants[i];

  int res = 0;
  int i = 0;
  int curW = cap;
  while (i < plants.size())
  {
    res += 1;
    curW -= plants[i];

    if (plants[i+1] > curW)
    {
      curW = cap;
      res += (i+1)*2;
    }

    i++;
  }

  cout << res;

    return 0;
}