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

  if (n <= 2)
  {
    cout << 1;
    return 0;
  }
  int count = 1;
  for (int i = 2; i < n; ++i)
    count += n % i == 0;
  cout << count;
  return 0;
}