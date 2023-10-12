#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, s = 0;
  long long int ans = 0, cnt;
  cin >> n;
  vector<int> p(n);

  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
   
  }
  sort(p.begin(), p.end());
  long long int target = 1;

  cout<<endl;
  for (int i = 0; i < n; i++)
  {
   // cout<<p[i]<<" "<<target<<endl;
    if (p[i] > target)
    {
      break;
    }
    target += p[i];
  }
  cout << target;
  return 0;
}