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
  int n; cin >> n;

  int minE = __INT_MAX__;
  int minP = 0;
  for (int i = 0; i < n; ++i)
  {
    int x;cin >> x;
    if (x < minE)
    {
      minE = x;
      minP = i;
    }
  }

  cout << minE << " " << minP +1<< endl;
  
  return 0;
}