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
  char s;
  int n;
  cin >> s >> n;
  loop (i, n)
  {
    int x;
    cin >> x;
    loop(j,x)
      cout << s;
    cout << endl;
  }
  
  return 0;
}