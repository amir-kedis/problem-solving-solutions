#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <unordered_set>
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

vector<int> solution(int N, int K, vector<int> &seats)
{
  priority_queue<int, vector<int>, greater<int>> openSeats;
  for (int i = 1; i <= N; ++i)
    openSeats.push(i);

  unordered_set<int> reservedSeats;

  vector<int> result;
  for (int i = 0; i < K; ++i)
  {
    if (seats[i] == 0) // reserve
    {
      int seat = openSeats.top();
      result.push_back(seat);
      reservedSeats.insert(seat);
      openSeats.pop();
    }
    else
    {
      if (reservedSeats.find(seats[i]) != reservedSeats.end())
      {
        reservedSeats.erase(seats[i]);
        openSeats.push(seats[i]);
      }
    }
  }

  return result;
}

int main()
{

  return 0;
}