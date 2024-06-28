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
  string byteValue;
  string CRC;
  cin >> n >> byteValue >> CRC;

  CRC[n-1] = byteValue[0];
  CRC[n] = byteValue[1];

  cout << CRC << endl;

  
  return 0;
}