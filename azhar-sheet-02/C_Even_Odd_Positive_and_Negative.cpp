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
  int even = 0;
  int odd = 0;
  int neg = 0;
  int pos = 0;

  loop(i, n)
  {
    int x;
    cin >> x;
    if (x % 2 == 0)
      even += 1;
    else
      odd += 1;
    if (x > 0)
      pos += 1;
    else if (x < 0)
      neg += 1;
  }
  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << pos << endl;
  cout << "Negative: " << neg << endl;
  return 0;
}