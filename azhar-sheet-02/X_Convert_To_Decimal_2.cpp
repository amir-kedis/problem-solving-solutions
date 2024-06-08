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

int numberOfSetBits(uint32_t i)
{
  i = i - ((i >> 1) & 0x55555555);                // add pairs of bits
  i = (i & 0x33333333) + ((i >> 2) & 0x33333333); // quads
  i = (i + (i >> 4)) & 0x0F0F0F0F;                // groups of 8
  i *= 0x01010101;                                // horizontal sum of bytes
  return i >> 24;                                 // return just that top byte (after truncating to 32-bit even when int is wider than uint32_t)
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    auto count = numberOfSetBits(n); 
    int res = 0;
    for (int i = 0; i < count; ++i)
      res += pow(2, i);
    cout << res << endl;
  }

  return 0;
}