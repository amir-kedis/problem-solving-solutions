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
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> sorted = {a, b, c};
  sort(sorted.begin(), sorted.end());

  int count = 0;


  while (sorted[0] + sorted[1] <= sorted[2])
  {
    count++;
    sort(sorted.begin(), sorted.end());
    sorted[0]++;
  }

  cout << count;

  return 0;
}