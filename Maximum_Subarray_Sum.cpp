#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  long long int mx = INT_MIN, mxi = -1e9,s = 0;
 
  if (n == 1)
  {
    cout<< nums[0];
    return 0;
  }
  for (auto it : nums)
  {
    s = s + it;
    if (s < 0)
    {
      s = 0;
    }
    mx = max(mx, s);
    mxi = max(mxi, 1LL*it);
  }
  if (mx > 0)
  {
    cout << 1LL*mx << endl;
  }
  else
  {
    cout << 1LL*mxi << endl;
  }
  
  return 0;
}