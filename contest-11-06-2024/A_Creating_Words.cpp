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
  int t;
  cin >> t;

  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    char c = s1[0];
    s1[0] = s2[0];
    s2[0] = c;
    cout << s1 << " " << s2 << endl;
  }

  return 0;
}