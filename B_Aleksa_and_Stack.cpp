#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, it = 2;
    cin >> n;
    vector<int> vc;
    while (1)
    {
      vc.push_back(it);
      it = it + 3;
      if (vc.size() == n)
      {
        break;
      }
    }
    for (auto pi : vc)
    {
      cout << pi << " ";
    }
    cout << endl;
  }
  return 0;
}