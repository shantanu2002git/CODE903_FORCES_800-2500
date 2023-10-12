#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,w;
  cin>>n>>w;
  vector<int>arr(n);
  /*If there is n pelople then un_optimally we need max to max  n boat >>>> BUT MINIMUM BOAT IS NEED*/

 int  c=n;

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  sort(arr.begin(),arr.end());
  int i=0,j=n-1;
  while(i<j){
    if(arr[i]+arr[j]<=w){
c--;
i++;
j--;
    }else{
      j--;
    }
  }
  
    cout<<c<<endl;
  return 0;
}