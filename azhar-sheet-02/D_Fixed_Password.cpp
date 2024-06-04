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
  while (true)
  {
    int x;
    cin >> x;
    if (x != 1999)
      cout << "Wrong" << endl;
    else
    {
      cout << "Correct" << endl;
      break;
    }
  }

  return 0;
}