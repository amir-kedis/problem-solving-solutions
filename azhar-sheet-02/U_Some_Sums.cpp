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
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  for (int i = 1; i <= n; ++i)
  {
    int digSum = 0;
    string num = to_string(i);
    for (auto c : num)
      digSum += c - '0';
    if (digSum >= a && digSum <= b)
      sum += i;
    }
  cout << sum;

  return 0;
}