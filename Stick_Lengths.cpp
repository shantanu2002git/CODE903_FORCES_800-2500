#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, median;
 long long int ans = 0, cnt;
  cin >> n;
  vector<int> p(n);

  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }

  sort(p.begin(), p.end());
  median = p[n / 2];

  for (const int &x : p)
  {
    ans += abs(median - x);
  }
  cout << ans << "\n";

  return 0;
}