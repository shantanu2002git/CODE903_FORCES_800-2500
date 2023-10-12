#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, c = 0,mx=-19;
  cin >> t;
  while (t--)
  {

    int a, b,f,s=0;
    cin >> a >> b >> f;

     s = a + b + f;
   // cout<<s<<endl;
    if(s==2 || s==3){
      c++;
    }
  
  }
  cout << c << endl;

  return 0;
}