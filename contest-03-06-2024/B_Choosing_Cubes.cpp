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

  for (int i = 0; i < t; ++i)
  {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> nums(n, 0);

    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      nums[j] = x;
    }
    int specialNumber = nums[f - 1];

    sort(all(nums));
    reverse(all(nums));

    int totalSpecial = count(all(nums), specialNumber);
    int kSpecial = count(nums.begin(), nums.begin() + k, specialNumber);
    if (k == n)
      cout << "YES" << endl;
    else if (nums[k - 1] < specialNumber)
      cout << "YES" << endl;
    else if (nums[k - 1] > specialNumber)
      cout << "NO" << endl;
    else
    {
      if (totalSpecial == kSpecial)
        cout << "YES" << endl;
      else
        cout << "MAYBE" << endl;
    }
  }

  return 0;
}