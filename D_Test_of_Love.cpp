#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll dp[200005];

ll rec(int i, int n, string &s, int m, int k) {
    // base
    if (i >= n) {
        return 0;
    }
    if (dp[i] != -1) return dp[i];
    if (s[i] == 'C') return INT_MAX;
    if (s[i] == 'W') {
        return dp[i] = 1 + rec(i + 1, n, s, m, k);
    }
    // recursive
    ll jump = INT_MAX;
    for (int j = 1; j <= m; j++) {
        jump = min(jump, rec(i + j, n, s, m, k));
    }
    return dp[i] = jump;
}

void asquare() {
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = "L" + s;
    n++;
    fill(dp, dp + 200005, -1);
    ll swims = rec(0, n, s, m, k);
    if (swims <= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        asquare();
    }
    return 0;
}
