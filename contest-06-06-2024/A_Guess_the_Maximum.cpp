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

int maxEl(vector<int> arr, int i, int j)
{
  int maxE = arr[i];
  for (int k = i; k <= j; k++)
    maxE = max(maxE, arr[k]);
  return maxE;
}

int findMinMax(vector<int> &arr)
{
  int minmax = INT32_MAX;
  loop(i, arr.size()-1)
  {
    for (int j = i + 1; j <= arr.size(); ++j)
    {

      minmax = min(minmax, maxEl(arr, i, j));
      // cout << i << " " << j << " " << maxEl(arr, i, j) << endl;
    }
  }
  return minmax;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    loop(i, n)
    {
      int x;
      cin >> x;
      arr[i] = x;
    }
    if (n == 1)
    {
      cout << arr[0] - 1 << endl;
      continue;
    }
    cout << findMinMax(arr) - 1 << endl;
  }

  return 0;
}