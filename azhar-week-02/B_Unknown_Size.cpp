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
  vector<int> divs;

  for (int i = 1; i <= n; ++i)
    if (n % i == 0)
      divs.push_back(i);

  cout << divs.size() << endl;
  for (int i = 0; i < divs.size(); ++i)
    cout << divs[i] << " ";

  return 0;
}