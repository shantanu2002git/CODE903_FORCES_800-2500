// #include <bits/stdc++.h>

// using namespace std;

// ll main() {
//     ll q;
//     cin >> q;

//     vector<ll> t(q), x(q), y(q);
//     for (ll i = 0; i < q; ++i) {
//         cin >> t[i] >> x[i];
//         if (t[i] == 2) cin >> y[i];
//     }

//     vector<ll> p(500013);
//     iota(p.begin(), p.end(), 0);

//     vector<ll> ans;
//     for (ll i = q - 1; i >= 0; --i) {
//         if (t[i] == 1) ans.push_back(p[x[i]]);
//         else p[x[i]] = p[y[i]];
//     }

//     reverse(ans.begin(), ans.end());
//     for (ll x : ans) cout << x << " ";

//     return 0;
// }
#include <iostream>
#include <vector>
#define long long ll;
using namespace std;

int main()
{
  ll t;
  cin >> t;
  vector<ll> arr;
  arr.reserve(t); // Preallocate memory for vector

  while (t--)
  {
    ll op, vl1, vl2;
    cin >> op;

    if (op == 1)
    {
      cin >> vl1;
      arr.push_back(vl1);
    }
    else if (op == 2)
    {
      cin >> vl1 >> vl2;
      for (ll i = 0; i < arr.size(); ++i) {
        if (arr[i] == vl1) {
          arr[i] = vl2;
        }
      }
    }
  }

  for(auto it : arr){
    cout << it << " ";
  }
  return 0;
}
