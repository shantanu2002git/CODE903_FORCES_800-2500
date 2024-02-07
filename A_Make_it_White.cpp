#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int b1=0,b2=0;
    for(int i=0; i<n ; i++){
      if(arr[i]=='B'){
        b1=i;
        break;
      }
    }


     for(int i=n-1; i>=0 ; i--){
      if(arr[i]=='B'){
        b2=i;
        break;
      }
    }

cout<<abs(b1-b2)+1<<endl;

  }
  return 0;
}