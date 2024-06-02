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
  // sort(nums.begin(), nums.end());
  // unique(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); ++i)
    for (int j = i + 1; j < nums.size(); ++j)
      if (nums[i] + nums[j] == target)
        count++;

  cout << count;
  return 0;
}