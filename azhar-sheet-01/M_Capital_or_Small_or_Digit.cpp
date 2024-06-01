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

  if (isalpha(c))
  {
    cout << "ALPHA" << endl;
    if (isupper(c))
      cout << "IS CAPITAL";
    else
      cout << "IS SMALL";
  }
  else if (isdigit(c))
    cout << "IS DIGIT";

  return 0;
}