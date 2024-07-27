#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{

  int t, a, b, c;
  cin >> t;
  while (t--)
  {
    cin >> a >> b >> c;

    priority_queue<int, std::vector<int>, std::greater<int>> q;
    q.push(a);
    q.push(b);
    q.push(c);
    //  cout<<q.top()<<" ";
    int tp = 5;
    while (tp--)
    {
      int tpx = q.top();

      q.pop();
      q.push(tpx + 1);
    }
    int mul = 1;
    while (!q.empty())
    {
      mul = mul * q.top();
      q.pop();
    }

    cout << mul << endl;
  }

  return 0;
}
