#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, res = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'B')
      {
        res++;
        i = i + (k - 1);
      }
    }
    cout << res << endl;
  }
  return 0;
}

/*
!
You are given a strip of paper s
 that is n
 cells long. Each cell is either black or white. In an operation you can take any k
 consecutive cells and make them all white.
>> Find the minimum number of operations needed to remove all black cells.

iterate from left to right with a variable i, and when you see a black cell, you should skip the next k−1
 cells (because the eraser will take care of them) and increase the number of operations by 1. 
 The answer is the total number of operations.

*/