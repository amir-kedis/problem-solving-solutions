#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;
int main()
{
  int a;
  int b;
  cin >> a >> b;

  if (a < b)
    swap(a, b);

  if (a % b == 0)
    cout << "Multiples";
  else
    cout << "No Multiples";

  return 0;
}