#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    /* code */
    cin >> arr[i];
  }
  int count = 1;
  int mx = 0;
  for (int i = 1; i < n; i++)
  {
    /* code */
    if (arr[i - 1] <= arr[i])
    {
      count++;
    }
    else
    {
      mx = max(mx, count);
      count = 1;
    }
  }
  mx = max(mx, count);
  cout << mx << endl;
  return 0;
}