#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll recexp(ll a,ll b,ll n,ll m)
{
    ll gcda=a%m;
    ll gcdb=b%m;
    while(n!=1)
    {
        if(n%2)
        {
            gcda=((a%m)*(__int128)(gcda%m)*(gcda%m))%m;
            gcdb=((b%m)*(__int128)(gcdb%m)*(gcdb%m))%m;
        }
        else
        {
            gcda=((__int128)(gcda%m)*(gcda%m))%m;
            gcdb=((__int128)(gcdb%m)*(gcdb%m))%m;
        }
        n/=2;
    }
    return __gcd((__int128)(gcda+gcdb)%m,m)%1000000007;
}
ll zer(ll a,ll b,ll n,ll m)
{
    ll gcda=a%m;
    ll gcdb=b%m;
    while(n!=1)
    {
        if(n%2)
        {
            gcda=((a%m)*(__int128)(gcda%m)*(gcda%m))%m;
            gcdb=((b%m)*(__int128)(gcdb%m)*(gcdb%m))%m;
        }
        else
        {
            gcda=((__int128)(gcda%m)*(gcda%m))%m;
            gcdb=((__int128)(gcdb%m)*(gcdb%m))%m;
        }
        n/=2;
    }
    return (gcda+gcdb)%m;
}

int main()
{
    int t;
    ll a,b,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(a==b)
        {
            ans = zer(a,b,n,1000000007);
            cout<<ans<<"\n";
            continue;
        }
        ans = recexp(a,b,n,a-b);
        cout<<ans<<"\n";
    }
    return 0;
}