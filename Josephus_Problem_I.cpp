#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> vc{2, 5, 7, 8};
  auto it = find(vc.begin(), vc.end(), 5); // find the iterator of the value 5
  if(it != vc.end()){
    vc.erase(it); // erase the element
  }
  cout << vc.size() << endl;
  for (auto it : vc)
  {
    cout << it << " ";
  }
  return 0;
}