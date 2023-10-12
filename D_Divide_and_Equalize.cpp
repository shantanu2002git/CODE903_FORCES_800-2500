#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vc(n, -1);

    for (int i = 0; i < n; i++)
    {
      cin >> vc[i];
    }

    map<int, int> cnt;
    for (auto it : vc)
    {

      for (int i = 2; i * i <= it; i++)
      {
        while (it % i == 0)
        {
          cnt[i]++;
          it = it / i;
        }
      }
      if (it > 1)
      {
        cnt[it]++;
      }
    }

    int fl = 1;
    for (auto p : cnt)
    {
      if (p.second % n != 0)
      {
        fl = 0;
        break;
      }
    }
    if (fl)
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