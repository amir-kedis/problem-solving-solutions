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
  int n;
  cin >> n;

  int a = 0, b = 1;

  for (int i = 0; i < n; i++)
  {
    if (i == 0 || i == 1)
    {
      cout << i << " ";
      continue;
    }
    cout << b + a << " ";
    int temp = b;
    b = a + b;
    a = temp;
  }

  return 0;
}