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
  int a, b;
  cin >> a >> b;
  bool foundLucky = false;
  for (int i = a; i <= b; ++i)
  {
    string s = to_string(i);
    bool lucky = true;
    for (auto c : s)
      if (c != '7' && c != '4')
      {
        lucky = false;
        break;
      }

    if (lucky)
    {
      foundLucky = true;
      cout << s << " ";
    }
  }

  if (!foundLucky)
    cout << -1;

  return 0;
}