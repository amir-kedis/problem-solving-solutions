
#include <algorithm>
#include <cmath>
#include <ctype.h>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main() {
  int n;
  cin >> n;
  bool even = false;

  for (int i = 1; i <= n; i++)
    if (i % 2 == 0) {
      cout << i << "\n";
      even = true;
    }

  if (!even)
    cout << -1;

  return 0;
}
