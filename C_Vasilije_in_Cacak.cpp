#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,k,s;
  cin>>n>>k>>s;
  ll x=k*(k+1)/2, z=(n-k+1+n)*k/2;
  if(x>s || z<s ){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
  }
  return 0;
}