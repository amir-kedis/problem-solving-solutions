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
  int n;
  cin >> n;
  vector<int> nums(n, 0);

  for (int i = 0; i < n; ++i)
    cin >> nums[i];

  sort(nums.begin(), nums.end());

  for (int i = 0; i < n; ++i)
    cout << nums[i] << "";

  return 0;
}