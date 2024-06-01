#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> arr = {0, 0, 0};
  cin >> arr[0] >> arr[1] >> arr[2];
  vector<int> sorted = vector<int>(arr);
  sort(sorted.begin(), sorted.end());

  for (int el : sorted)
    cout << el << endl;
  cout << endl;
  for (int el : arr)
    cout << el << endl;
  return 0;
}