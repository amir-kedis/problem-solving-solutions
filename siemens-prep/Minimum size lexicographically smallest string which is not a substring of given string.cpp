#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <iomanip>
#include <vector>
#include <queue>

typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define loop(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  string s;
  cin >> s;

  set<string> substrs;

  for (int i = 0; i < s.size(); ++i)
  {
    string cur;
    for (int j = i; j < s.size(); ++j)
    {
      cur.push_back(s[j]);
      substrs.insert(cur);
    }
  }

  queue<string> q;

  for (size_t i = 0; i < 26; i++)
  {
    q.push(string(1, i+'a'));
  }

  while (!q.empty())
  {
    string cur = q.front();
    q.pop();

    if (substrs.find(cur) == substrs.end())
    {
      cout << cur<< endl;
      return 0;
    }

    for (size_t i = 0; i < 26; i++)
    {
      cur.push_back('a'+i);
      q.push(cur);
      cur.pop_back();
    }
    
  }

  return 0;
}