#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int tt;
    cin>>tt;
    vector<pair<int,int>>vp; 
    while(tt--){
      int s1,e1;
      cin>>s1>>e1;
      vp.push_back({s1,e1});
    }
    
    int w=vp[0].first, s=vp[0].second, c=1; 
    for(int i=1; i<vp.size(); i++){
      if(vp[i].first >= w && vp[i].second >=s){ 
        c++; 
        break;
      } 
    }
    if(c!=1){
      cout<<-1<<endl;
    }else{
      cout<<w<<endl; // print start time of first available slot
    }
  }
  return 0;
}
