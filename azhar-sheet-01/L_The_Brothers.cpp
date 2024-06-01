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
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;

  if (s2 == s4)
    cout << "ARE Brothers";
  else 
    cout << "NOT";

  return 0;
}