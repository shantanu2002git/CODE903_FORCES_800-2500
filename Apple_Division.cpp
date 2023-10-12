#include <bits/stdc++.h>
using namespace std;
vector<int> prefixsum(vector<int> vi)
{
  vector<int> res(vi.size());
  partial_sum(vi.begin(), vi.end(), res.begin());
  return res;
}
vector<int> sufixsum(vector<int> vi)
{
  vector<int> res(vi.size());
  reverse(vi.begin(), vi.end());
  partial_sum(vi.begin(), vi.end(), res.begin());
  return res;
}


int main(){
  int n;
  cin >> n;
   vector < int > vc(n);
for(int i=0; i<n; i++){
  cin>>vc[i];
}

sort(vc.begin(),vc.end());// 1 2 3 4 7  1 3 6 10 17->
                                    //17 16 14 11 7
vector<int>vx1,vx2;
vx1=prefixsum(vc);
vx2=sufixsum(vc);

int mn=1e9;
for(int i=0; i<n;i++){
  //mn=min(mn,(vx2[i]-vx1[i]));
//cout<<mn<<endl;

}


  return 0;
}