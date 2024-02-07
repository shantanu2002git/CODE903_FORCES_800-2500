#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010
int t, n, a[MAXN], k[MAXN], q;
/*!SECTION

 cin >> n;
    for (int i = 1; i <= n; ++i)
      cin >> a[i];
    a[n + 1] = 0;
    for (int i = n; i >= 1; --i)
      k[i] = (a[i] == a[i + 1] ? k[i + 1] : i + 1);
    cin >> q;
    int l, r;
    while (q--)
    {
      cin >> l >> r;
      if (k[l] <= r)
        cout << l << " " << k[l] << endl;
      else
        cout << -1 << " " << -1 << endl;

        */
int main()
{
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    vector<int> siq(n);
    set<int> st;
    int c = 0, ix = 1;
    for (int i = 1; i <= n; i++)
    {
      if (st.count(a[i]) == 0)
      {
        c++;
        siq[ix++] = c;
        st.insert(a[i]);
      }
      else
      {
        siq[ix++] = c;
      }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //   cout << siq[i] << " ";
    // }
    // cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
      int l, r;
      cin >> l >> r;

      int d = abs(siq[l] - siq[r]) + 1;
      if (d >= 2)
      {
        set<int> st;
        int x=-1,y=-1;
        while (l <= r)
        {
          
          if(x==-1){
            x=l;
          }else if(y==-1){
            y=r;
          }
          l++;
          r--;
        }
        cout<<l<<" "<<r<<endl;
      }
      else if (siq[l] == siq[r])
      {
        cout << -1 << " " << -1 << endl;
      }
    }
    cout << endl;
  }
  return 0;
}

/*!SECTION

1 1 2 1 1 4 2 3 3
1 1 2 2 2 3 3 4 4
*/