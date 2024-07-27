#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
   int r,g,b;
   cin>>r>>g>>b;
   
   string c;
   cin>>c;

   vector<int>colo(3);
   colo[0]=r;
   colo[1]=g;
   colo[2]=b;
int mx=-1;
   if(c=="Green"){
    mx=min(r,b);
   }
   if(c=="Red"){
     mx=min(g,b);
   }
if(c=="Blue"){
    mx=min(r,g);
}
   
   cout<<mx<<endl;
    return 0;
}
