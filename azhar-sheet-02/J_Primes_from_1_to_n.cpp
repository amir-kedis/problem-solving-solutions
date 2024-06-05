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

bool isPrime(int n)
{
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;
  return true;
}

int main()
{
  int n; cin >> n;
  for (int i = 2; i<=n; ++i)
    if (isPrime(i)) cout << i << " ";

  return 0;
}