#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+5;
ll a[N],b[N];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;scanf("%d",&n);
        ll sum1=0;ll sum2=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            sum1+=a[i];
        }
        sort(a+1,a+1+n);
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&b[i]);
            sum2+=b[i];
        }
        sort(b+1,b+1+n);
        ll ans=min(sum1+n*b[1],sum2+n*a[1]);
        cout<<ans<<endl;
    }
}