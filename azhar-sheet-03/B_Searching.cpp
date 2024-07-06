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
int gcd(int a, int b){int result = min(a, b); while (result > 0){if (a % result == 0 && b % result == 0){break;}result--;}return result;}
int main()
{
  cin.tie(0);
  cin.sync_with_stdio(0);

  ll n; cin >> n;
  vector<ll> nums(n, 0);

  for (ll i = 0; i < n; ++i)
    cin >> nums[i];
  
  ll x; cin >> x;

  ll pos = -1;
  for (ll i = 0; i < n; ++i)
    if (nums[i] == x)
    {
      pos = i;
      break;
    }
  
  cout << pos << endl;
  
  return 0;
}