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
  int k, s;
  cin >> k >> s;
  int count = 0;

  loop(i, k + 1)
  {
    loop(j, k + 1)
    {
      int z = s - i - j;
      if (z >= 0 && z <= k)
        count++;
    }
  }

  cout << count << endl;

  return 0;
}