#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, t, mid;
  vector<int> v1, v2;
  cin >> n;
  // 7 6 5 4 3 2 1
  int p = n;
  t = n * (n + 1) / 2;
  if (t % 2 != 0)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
    mid = t / 2;
    for (int i = n; i >= 1; i--)
    {
      if (i <= mid)
      {
        v1.push_back(i);
        mid = mid - i;
      }
      else
      {
        v2.push_back(i);
      }
    }
  }
  //cout<<endl;
  cout << v1.size() << endl;
  for (auto it : v1)
  {
    cout << it << " ";
  }
  cout<<endl;
  cout << v2.size() << endl;
  for (auto it : v2)
  {
    cout << it << " ";
  }

  return 0;
}
