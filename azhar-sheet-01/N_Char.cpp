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
  char c;
  cin >> c;
  if (isupper(c))
    cout << (char)tolower(c);
  else
    cout << (char)toupper(c);
  return 0;
}