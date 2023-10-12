#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    vector<int> vc(3, -1);
    for (int i = 0; i < 3; i++)
    {
      cin >> vc[i];
    }
    sort(vc.begin(), vc.end());
    int k0 = vc[0], k1 = vc[1], k2 = vc[2];
    int op = 0;
    if (k1 % k0 == 0 && k2 % k0 == 0)
    {
      op = op + (k1 / k0 - 1) + (k2 / k0 - 1);
      if (op <= 3)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
      continue;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}