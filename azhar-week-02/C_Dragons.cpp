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
  int s;
  int n;
  cin >> s >> n;

  vector<pair<int, int>> dragons(n, {0, 0});

  for (int i = 0; i < n; ++i)
    cin >> dragons[i].first >> dragons[i].second;

  // stable_sort(dragons.begin(), dragons.end(), [](const pair<int, int> &a, const pair<int, int> &b)
  //      { return a.second > b.second; });

  // stable_sort(dragons.begin(), dragons.end(), [](const pair<int, int> &a, const pair<int, int> &b)
  //      { return a.first < b.first; });

  sort(all(dragons));

  bool canWin = true;
  for (int i = 0; i < n; ++i)
  {
    if (s > dragons[i].first)
      s += dragons[i].second;
    else
    {
      canWin = false;
      break;
    }
  }

  if (canWin)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}