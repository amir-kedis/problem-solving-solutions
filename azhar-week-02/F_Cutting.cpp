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

int solve(vector<int> &nums, int b)
{
  int res = 0;

  vector<int> costs;
  int evenCount = 0;
  int oddCount = 0;

  for (int i = 0; i < nums.size()-1; ++i)
  {
    if (nums[i] % 2 == 0)
      evenCount++;
    else
      oddCount++;
    if (evenCount == oddCount)
      costs.push_back(abs(nums[i] - nums[i + 1]));
  }

  sort(all(costs));

  int totalCost = 0;
  for (auto cost : costs)
  {
    if (totalCost + cost <= b)
    {
      totalCost += cost;
      res++;
    }
  }

  return res;
}

int main()
{
  int n;
  int b;
  cin >> n >> b;

  vector<int> nums(n, 0);
  for (int i = 0; i < n; ++i)
    cin >> nums[i];

  cout << solve(nums, b);

  return 0;
}