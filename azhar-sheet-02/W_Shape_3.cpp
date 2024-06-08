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

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n - i - 1; j++)
      cout << " ";
    for (int j = 0; j < 1 + i * 2; j++)
      cout << "*";
    cout << endl;
  }
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < i; j++)
      cout << " ";
    for (int j = 0; j < (n-i) * 2-1; j++)
      cout << "*";
    cout << endl;
  }

  return 0;
}