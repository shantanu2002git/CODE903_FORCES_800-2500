
#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> dp;

int solve(int idx) {
  if (idx >= a.size()) {
    return 0;
  }

  if (dp[idx] != -1) {
    return dp[idx];
  }

  int ans = a[idx];
  int j = idx + a[idx];
  if (j < a.size()) {
    ans += solve(j);
  }

  dp[idx] = ans;
  return ans;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    int n;
    cin >> n;
    a.resize(n);
    for (int &x : a) {
      cin >> x;
    }

    dp.assign(n, -1);
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
      maxSum = max(maxSum, solve(i));
    }

    cout << maxSum << endl;
  }
  return 0;
}