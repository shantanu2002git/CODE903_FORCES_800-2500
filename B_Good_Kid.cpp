#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, mx = INT16_MAX, dx;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (mx > arr[i])
      {
        mx = arr[i];
        dx = i;
      }
    }
    //cout << mx << " " << dx;
    arr[dx]=mx+1;
    int s=1;
    for(int i=0; i<n; i++){
      s=s*arr[i];
    }
    cout<<s<<endl;
  }
  return 0;
}