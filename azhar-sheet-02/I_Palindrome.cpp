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
  long long n;
  cin >> n;
  string num = to_string(n);
  string rev(num);
  reverse(rev.begin(), rev.end());

  bool foundNonZero = false;
  for (auto c : rev)
  {
    if (c != '0')
    {
      foundNonZero = true;
      cout << c;
    } else if (foundNonZero)
      cout << c;
  }
  if (string::npos == rev.find_first_not_of('0'))
    cout << '0';
  cout << endl;

  if (rev == num)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}