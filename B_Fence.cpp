#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<ll> prf(n);
  prf[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    prf[i] = prf[i - 1] + arr[i];
  }

  // for (int i = 0; i < n; i++)
  // {
  //     cout << prf[i] << " ";
  // }
  // cout << endl;

  int mx = INT_MAX, mxdx = 1, premin = INT_MAX;
  for (int i = k - 1; i < n-k; i++)
  {
    if (i - k >= 0)
    {
      mx = min(mx, (int)(prf[i] - prf[i - k]));
      if (premin > mx)
      {
        mxdx = i;
        premin = mx;
      }
    }
    else
    {
      mx = min(mx, (int)prf[i]);
      if (premin > mx)
      {
        mxdx = i;
        premin = mx;
      }
    }
  }
  cout << mxdx-1 << endl;

  return 0;
}
