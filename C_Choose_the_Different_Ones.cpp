#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    set<int> sa, sb, sc;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] <= k)
      {
        sa.insert(a[i]);
        sc.insert(a[i]);
      }
    }

    for (int i = 0; i < m; i++)
    {
      cin >> b[i];
      if (b[i] <= k)
      {
        sb.insert(b[i]);
        sc.insert(b[i]);
      }
    }
    int na = sa.size(), nb = sb.size();
    if (min(na, nb) >= k / 2 && sc.size() >= k)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
