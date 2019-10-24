#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll phi(ll n)
{
    ll ans=n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ans-=ans/i;
        }
    }
    if(n!=1)
    {
        ans-=ans/n;
    }
    return ans;
}
int main()
{
    int t;
    ll n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans = phi(n);
        cout<<ans<<'\n';
    }
    return 0;
}