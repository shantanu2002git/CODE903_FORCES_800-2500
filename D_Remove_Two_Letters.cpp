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
    string si;
    cin >> si;
    int res = n - 1;
    for (int i = 1; i + 1 < n; i++)
    {
      if (si[i - 1] == si[i + 1])
      {
        res--;
      }
    }
    cout << res << endl;
  }
  return 0;
}