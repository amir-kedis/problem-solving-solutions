#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <iomanip>
#include <vector>
#include <unordered_map>

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

  for (int i = 0; i < n; ++i)
  {
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    unordered_map<char, int> freq;
    int count = 0;
    for (char ch = 'A'; ch <= 'G'; ch++)
      freq.insert(make_pair(ch, 0));
    for (int i = 0; i < s.length(); ++i)
      freq[s[i]]++;
    for (auto el : freq)
      count += (m - el.second  >= 0) ? m - el.second : 0; 
    cout << count << endl;
  }

  return 0;
}