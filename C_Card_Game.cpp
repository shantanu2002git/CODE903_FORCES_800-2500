#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long ans=0;
        int n; cin>>n;
        long long int arr[n],b[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<=n;i++){
            b[i]=0;
        }
        for(int i=n-1;i>=0;i--){
            long long x;
            if(arr[i]>=0) x=arr[i];
            else x=0;
            b[i]=b[i+1]+x;
        }
        for(int i=0;i<n;i++){
            long long y;
            if(i%2==0) y=arr[i];
            else y=0;
            ans=max(ans,b[i+1]+y);
        }
        cout<<ans<<endl;
    }
}