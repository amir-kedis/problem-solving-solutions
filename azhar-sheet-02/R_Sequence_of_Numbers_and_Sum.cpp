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
  do
  {
    int n, m;
    cin >> n >> m;
    if (n <= 0 || m <= 0)
      break;
    int sum = 0;
    for (int i = min(n, m); i <= max(n, m); ++i)
    {
      sum += i;
      cout << i << " ";
    }
    cout << "sum =" << sum << endl;

  } while (true);

  return 0;
}