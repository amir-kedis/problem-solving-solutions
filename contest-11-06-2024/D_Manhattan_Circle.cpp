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
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> rowsCounts(n, 0);
    vector<int> colsCounts(m, 0);
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        char c;
        cin >> c;
        if (c == '#')
        {
          rowsCounts[i]++;
          colsCounts[j]++;
        }
      }
    }
    int x, y;
    int rowM = INT32_MIN, colM = INT32_MIN;
    loop(i, n) if (rowsCounts[i] > rowM)
    {
      rowM = rowsCounts[i];
      x = i;
    }
    loop(i, m) if (colsCounts[i] > colM)
    {
      colM = colsCounts[i];
      y = i;
    }
    cout << x + 1 << " " << y + 1;
    cout << endl;
  }

  return 0;
}