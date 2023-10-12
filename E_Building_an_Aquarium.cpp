#include <bits/stdc++.h>
using namespace std;
/*
You love fish, that's why you have decided to build an aquarium. You have a piece of coral made of n
 columns, the i
-th of which is ai
 units tall. Afterwards, you will build a tank around the coral as follows:

Pick an integer h≥1
 — the height of the tank. Build walls of height h
 on either side of the tank.
Then, fill the tank up with water so that the height of each column is h
, unless the coral is taller than h
; then no water should be added to this column.
For example, with a=[3,1,2,4,6,2,5]
 and a height of h=4
, you will end up using a total of w=8
 units of water, as shown.
You can use at most x
 units of water to fill up the tank, but you want to build the biggest tank possible. What is the largest value of h
 you can select?
*/
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    long long int lo = 0, hi = 2'000'000'007;
    while (lo < hi)
    {
      long long mid = lo + (hi - lo + 1) / 2;
      long long tot = 0;
      for (int i = 0; i < n; i++)
      {
        tot += max(mid - a[i], 0LL);
      }
      if (tot <= x)
      {
        lo = mid;
      }
      else
      {
        hi = mid - 1;
      }
    }
    cout << lo << endl;
  }

  return 0;
}

/*
ALG :
We need to find the maximum height with a certain upper bound — this is a tell-tale sign of binary search. If you don't know what that is, you should read this Codeforces EDU article.

For a given value of h
, in the i
-th column we will need h−ai
 units of water if h≥ai
, or 0
 units otherwise. (This is equal to max(h−ai,0)
, why?) So we can compute the amount of water for all n
 columns by simply iterating through and summing the total amount of water needed for each column, and see if it's not larger than x
.

Then you can binary search on the optimal value of h
. The model solution uses the starting bounds l=0
, r=2ai+ε
, because the optimal height could be ai+x
. So the complexity is O(nlogai)
 per testcase.
*/