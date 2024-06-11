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
int gcd(int a, int b)
{
  int result = min(a, b);
  while (result > 0)
  {
    if (a % result == 0 && b % result == 0)
    {
      break;
    }
    result--;
  }
  return result;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int maxSum = INT32_MIN;
    int res = 2;
    for (int i = 2; i <= n; ++i)
    {
      int sum = i * ((n / i) * (n / i + 1)) / 2;
      if (sum > maxSum) 
      {
        maxSum = sum;
        res = i;
      }
    }
    cout << res << endl;
  }

  return 0;
}