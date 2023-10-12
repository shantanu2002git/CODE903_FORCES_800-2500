#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> vc(n), nw;
    for(int i=0; i<n; i++){
      cin>>vc[i];
    }
    /*
    int mx=*max_element(vc.begin(),vc.end());
    int ni=mx*2+3;
    for(int i=1; i<ni; i++){
      if(find(vc.begin(),vc.end(), i)==vc.end()){
        nw.push_back(i);
        if(nw.size()>=n){
          break;
        }
      }
    }

int mn=*min_element(nw.begin(),nw.end());
    for(auto it  : nw){
      cout<<it<<" ";
    }
    cout<<endl;
   // cout<<mn<<endl; // add a new line after each test case
   */
  int ans=1;
  for(int i=0; i<n; i++){
    if(vc[i]==ans){
      ans=vc[i]+1;
    }
    if(i==n-1) break;

    ans++;
  }
  cout<<ans<<endl;
  }
  return 0;
}
