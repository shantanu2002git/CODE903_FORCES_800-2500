#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;

    string in = "", fl = s1;
    int c = 0;
    while (1)
    {
      if (fl.find(s2) != string::npos)
      {
        break;
      }
      if (fl.size() > 2 * s2.size() && c != 0)
      {
        c=-1;
        break;
      }
      fl = fl + fl;
      c++;
    }
    cout << c << endl;
  }
  return 0;
}