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
  int n, d;
  cin >> n >> d;
  vector<int> heights = vector<int>(n, 0);

  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    heights[i] = x;
  }
  sort(heights.begin(), heights.end());
  int count = 0;

  for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
      if (heights[j] - heights[i] <= d)
        count += 2;

  cout << count;

  return 0;
}