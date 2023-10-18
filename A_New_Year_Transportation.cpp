// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,t;
//   cin>>n>>t;
//   vector<int>arr(n),res;
//   for(int i=1; i<=n; i++){
//     cin>>arr[i];
//   }
//   int k=arr[1];
// for(int i=0; i<n; i++){
//   res.push_back(k);
//   k=arr[i]+i+1;
// }
// for(auto it :res){
//  if(it==t){
//   cout<<"YES"<<endl;
//   return 0;
//  }
// }
//  cout<<"NO";
//   return 0;
// }

#include <iostream>
#include <vector>

int main() {
    int N, T;
    std::cin >> N >> T;

    std::vector<int> A(N+1);
    for(int i = 1; i < N; i++) {
        std::cin >> A[i];
    }
    A[N] = 1;

    for(int cur = 1; cur <= N; cur += A[cur]) {
        if(cur == T) {
            std::cout << "YES";
            return 0;
        }
    }
    
    std::cout << "NO";
    return 0;
}