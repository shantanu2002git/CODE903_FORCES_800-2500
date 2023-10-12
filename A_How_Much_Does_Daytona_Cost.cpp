#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0; i<n; i++){
      cin>>vc[i];
    }

    int f=0;
    for(int i=0; i<n ; i++){
      int c1=0,c2=0;
      for(int j=i; j<n; j++){
        if(vc[j]==k){
          c1++;
        }else{
          c2++;
        }
        if(c1>c2){
          f=1;
          break;
        }
      }
      if(f){
        break;
      }
    }
    if(f){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}