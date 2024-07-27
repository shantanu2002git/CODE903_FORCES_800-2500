#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

// Function to calculate factorial
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
set<string>st;
// Function to generate permutations
void permute(string &s, int idx, int n) {
    if (idx == n) {
        // cout << s << endl;
        st.insert(s);
        return;
    }

    for (int i = idx; i < n; i++) {
        // Ensure we do not swap duplicate characters
        bool shouldSwap = true;
        for (int j = idx; j < i; j++) {
            if (s[j] == s[i]) {
                shouldSwap = false;
                break;
            }
        }

        if (shouldSwap) {
            swap(s[i], s[idx]);
            permute(s, idx + 1, n);
            swap(s[i], s[idx]);
        }
    }
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end()); // Sort the string to handle duplicates

    map<char, int> mp;
    int n = s.size();

    for (char it : s) {
        mp[it]++;
    }

    int cnt = fact(n), mul = 1;

    for (auto it : mp) {
        mul *= fact(it.second);
    }

    cout << cnt / mul << endl;

    permute(s, 0, n);
    for(auto it : st){
      cout<<it<<endl;
    }

    return 0;
}
