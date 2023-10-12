#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod=1e9+7;
int main() {
  int n;
  cin >> n;
  
  ll k = 1;
  for(int i = 1; i <= n; i++) {
    k = (k * 2) % mod;
  }
  
  cout << k << endl;
  return 0;
}
