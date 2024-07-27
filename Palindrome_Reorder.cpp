#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto it : s)
  {
    mp[it]++;
  }

  string res = "";
  string ex = "";
  int fl = 0;
  for (auto i : mp)
  {
    int cn = i.second;
    if (cn % 2 != 0)
    {
      ex = string(cn, i.first);
      if (fl)
      {
        cout << "NO SOLUTION" << endl;
        return 0;
      }
      fl = 1;
    }
    else
    {
      // cout<<i.first<<" ";
      char ci = i.first;
      res += string(cn / 2, ci);
    }
  }
  string rv = res;
  reverse(rv.begin(), rv.end());
  res = res + ex + rv;
  cout << res << endl;

  return 0;
}
