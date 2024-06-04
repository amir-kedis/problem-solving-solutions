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

ll factorial(int n)
{
  if (n <= 1)
    return 1;
  return factorial(n - 1) * n;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x;
    cin >> x;
    cout << factorial(x) << endl;
  }

  return 0;
}