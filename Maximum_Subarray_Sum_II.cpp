#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;
  cin>>n>>a>>b;
  int s=0,i=0,j=0;

vector<int>arr(n);
for(int i=0; i<n; i++){
  int x;
  cin>>x;
  arr[i]=x;
}
int mx=-1;
while(i<n){
  s=s+arr[i];
  
   if((i-j+1)>=b){
    s=s-arr[j];
    j++;
  }
   cout<<s<<" "<<(i-j+1)<<" *  " <<i<<"   "<<j<<endl;
  if((i-j)>b && (i-j)<a){
    mx=max(mx,s);
  }
  //cout<<" -> "<<s;
  i++;

}
cout<<mx;
  return 0;
}