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
    int arr[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      s = s + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
      {
        s1 = s1 + arr[i];
      }
      else
      {
        s2 = s2 + arr[i];
      }
      s = s + arr[i];
    }
    cout << s << endl;
    for (int i = 0; i < n; i++)
    {
      int k = s - arr[i];
      if ((arr[i]) % 2 == 0 && (k % 2 == 0) || (arr[i] % 2 != 0) && (k % 2 != 0))
      {
        cout << "NO" << k << " " << arr[i] << endl;
        return 0;
      }
    }
    cout << "YES" << endl;
  }
  return 0;
}