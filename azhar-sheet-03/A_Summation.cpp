#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <deque>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
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
  cin.tie(0);
  cin.sync_with_stdio(0);

  ll n; cin >> n;

  ll sum = 0;
  for (int i = 0; i< n; ++i)
  {
    ll x;
    cin >> x;
    sum += x;
  }

  cout << abs(sum) << endl;
  
  return 0;
}