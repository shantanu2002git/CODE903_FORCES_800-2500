

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,fl=0;
  cin >> t;
  while (t--)
  {
    string st;
    cin >> st;
    string pl = st;

    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }

    swap(pl[0], pl[1]);

    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }
    pl = st;
    swap(pl[1], pl[0]);
    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }
    pl = st;
    swap(pl[1], pl[2]);
    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }
    pl = st;
    swap(pl[2], pl[1]);
    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }
    pl = st;

    swap(pl[0], pl[2]);
    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }
    pl = st;
    swap(pl[2], pl[0]);
    if (pl == "abc")
    {
      cout << "YES" << endl;
      fl=1;continue;
    }

    cout << "NO" << endl;

  }
return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string st;
    cin>>st;
    int df=0;
    if(st[0]!='a') df++;
    if(st[1]!='b') df++;
    if(st[2]!='c') df++;

    if(df>2){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}