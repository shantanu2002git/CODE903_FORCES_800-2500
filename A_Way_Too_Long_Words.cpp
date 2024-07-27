#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    ll n = s.size();
    if (n >10)
    {
      string sp = s[0] + to_string(n - 2) + s[n - 1];
      cout << sp << endl;
    }
    else
    {
      cout << s << endl;
    }
  }

  return 0;
}
