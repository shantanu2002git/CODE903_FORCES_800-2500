#include <bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  string hi="hello";
  int j=0;
  for(int i=0; i<str.size(); i++){
   if(hi[j]==str[i]){
    j++;
   }
  }
 if(j!=5){
  cout<<"NO"<<endl;
 }else{
  cout<<"YES"<<endl;
 }
  return 0;
}
