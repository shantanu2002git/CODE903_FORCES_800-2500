#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b)
{
  return a[1] < b[1];
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> time;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    time.push_back({x, y});
  }
  sort(time.begin(), time.end(), cmp);

  int rw = 1, end = time[0][1];
  for (int i = 1; i < time.size(); i++)
  {
    if (time[i][0] >= end)
    {
      rw++;
      end = time[i][1];
    }
  }
  cout << rw;
  return 0;
}
