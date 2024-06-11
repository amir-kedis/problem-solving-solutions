#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> nums(n, 0);
    loop(i, n)
    {
      ll x;
      cin >> x;
      nums[i] = x;
    }

    int count = 0;
    ll prefixSum = 0;
    loop(i, n)
    {
      if (nums[i] == prefixSum)
        count++;
      if (nums[i] < prefixSum)
      {
        prefixSum += nums[i];
        loop(j, i)
        {
          if (nums[j] * 2 == prefixSum)
          {
            count++;
            break;
          }
        }
        continue;
      }
      prefixSum += nums[i];
    }
    cout << count << endl;
  }

  return 0;
}