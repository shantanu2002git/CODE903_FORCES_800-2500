#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0;
  cin >> n;
int val[5]={100,20,10,5,1};
  for(int i=0;i<5;i++){
    c=c+ n/val[i];
    n=n%val[i];
  }
cout<<c;
  return 0;
}