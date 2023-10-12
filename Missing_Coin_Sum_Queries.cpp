#include <bits/stdc++.h>
using namespace std;

bool  coin(int q1, int q2, vector<int> &vc, int i)
{
  if (i == 0)
  {
    return 1;
  }
  if (q2 < i)
  {
    return 0;
  }
  int ttk = coin(q1 + 1, q2, vc, i - vc[q1]);
  int ntt = coin(q1 + 1, q2, vc, vc[q1] );

  return ttk || ntt;
}
int caldp(int q1, int q2,vector<int>&vc, int s)
{
  for (int i = 1; i <= s; i++)
  {
    if (coin(q1, q2,vc, i))
    {
      return i;
    }
  }
  return -1; //! this codisation do not occur
}
int main()
{
  int n, k, s = 0;
  cin >> n >> k;
  vector<int> vc(n);
  for (int i = 1; i <= n; i++)
  {
    cin >> vc[i];
    s = s + vc[i];
  }
  while (k--)
  {
    int q1, q2;
    cin >> q1 >> q2;
    cout<<caldp(q1, q2, vc,s);
  }
  return 0;
}