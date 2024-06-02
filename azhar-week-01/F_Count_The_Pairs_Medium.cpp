#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> nums = vector(n, 0);
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    nums[i] = x;
  }
  int target = *min_element(nums.begin(), nums.end()) + *max_element(nums.begin(), nums.end());
  int count = 0;
  sort(nums.begin(), nums.end());
  int l = 0;
  int r = n - 1;
  while (l < r)
    if (nums[l] + nums[r] == target)
    {
      count++;
      l++;
      r--;
    }
    else if (nums[l] + nums[r] > target)
      r--;
    else
      l++;

  cout << count;

  return 0;
}