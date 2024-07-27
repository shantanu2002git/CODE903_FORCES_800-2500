#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vc(n, -1);
   for(int i=n; i>=k; i--){
    cout<<i<<" ";
   }
   for(int i=m+1; i<k; i++){
    cout<<i<<" ";
   }
   for(int i=1; i<=m; i++){
    cout<<i<<" ";
   }
   cout<<endl;
  }

  return 0;
}
