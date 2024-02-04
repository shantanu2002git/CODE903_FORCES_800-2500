#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y,n,c=1;
    cin>>x>>y>>n;
    while(x%2==0){
       c=c*2;
      x=x/2;
    }
    while(y%2==0){
      c=c*2;
      y=y/2;
    }
    if(c>=n){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
  return 0;
}

//4 2 1
/*!SECTION

1 X 4

1 X 2
1 X 2
1 X 1
1 X 1


1 X 6


1 X 3
1 X 2
1 X 1
1 X 1

*/