#include <bits/stdc++.h>
using namespace std;

// 0 0 0 1 0 2 0 3 1 1 4 
// a b r a c a d a b r a

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    string res = "";
    vector<int> fq(26, -1);
    for (int i = 0; i < n; i++)
    {
      for (char p = 'z'; p >= 'a'; p--)
      {
        if (fq[p - 'a'] == arr[i] - 1)
        {
          fq[p - 'a']++;
          res = res + p;
          break;
        }
      }
    }
    cout << res << endl;
  }
  return 0;
}
/*!SECTION
5
11
0 0 0 1 0 2 0 3 1 1 4
10
0 0 0 0 0 1 0 1 1 0
1
0
8
0 1 2 3 4 5 6 7
8
0 0 0 0 0 0 0 0

abracadabra
codeforces
a
aaaaaaaa
dijkstra
+
*/