#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <iomanip>
#include <vector>
#include <unordered_map>

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

  loop(j, t)
  {
    int n, m;
    cin >> n;
    vector<int> origin(n, 0);
    vector<int> target(n, 0);
    for (int i = 0; i < n; ++i)
    {
      int x;
      cin >> x;
      origin[i] = x;
    }
    for (int i = 0; i < n; ++i)
    {
      int x;
      cin >> x;
      target[i] = x;
    }
    cin >> m;
    unordered_map<int, int> mods;
    loop(i, m)
    {
      int x;
      cin >> x;
      mods[x]++;
    }
    bool yes = true;
    vector<int> needed;
    loop(i, n)
    {
      if (origin[i] != target[i])
        needed.push_back(target[i]);
    }
    unordered_map<int, int> neededFreq;
    for (auto x : needed)
      neededFreq[x]++;
    for (auto el : neededFreq)
      if (mods[el.first] < el.second)
      {
        yes = false;
        break;
      }
    
    if (yes)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}