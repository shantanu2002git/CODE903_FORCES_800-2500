#include <bits/stdc++.h>
using namespace std;

int caldp(vector<int> &arr, int idx, int tr, vector<int> &dp)
{
  if (tr == 0)
  {
    return 1;
  }
  if (idx >= arr.size())
  {
    return 0;
  }
  if (dp[idx] != -1)
  {
    return dp[idx];
  }
  int ttk = 0, ntt = 0;
  if (arr[idx] <= tr)
  {
    ttk = caldp(arr, idx + 1, tr - arr[idx], dp);
  }
  ntt = caldp(arr, idx + 1, tr, dp);

  return dp[idx] = (ttk + ntt);
}
int main()
{
  int tr;
  cin >> tr;
  vector<int> arr(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> arr[i];
  }
  vector<int> dp(arr.size(), -1);
  cout << caldp(arr, 0, tr, dp);
  return 0;
}
