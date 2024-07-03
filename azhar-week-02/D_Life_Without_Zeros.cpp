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

int remove_zeros(int n)
{
  string nStr = to_string(n);
  string nStrNo0 = "";

  for (int i = 0; i < nStr.size(); ++i)
    if (nStr[i] != '0')
      nStrNo0 += nStr[i];

  int nNo0 = stoi(nStrNo0);

  return nNo0;
}

int main()
{
  int a;
  int b;
  cin >> a >> b;

  int c = a + b;

  int a0 = remove_zeros(a);
  int b0 = remove_zeros(b);
  int c0 = remove_zeros(c);

  if (a0 + b0 == c0)
    cout << "YES";
  else 
    cout << "NO";

  return 0;
}