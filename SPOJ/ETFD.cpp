#include<bits/stdc++.h>
#define N 1000001
using namespace std;
typedef long long int ll;
vector< ll > p(N);
vector< ll > d(N);
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
void init()
{
    p[0]=0;
    d[0]=0;
    p[1]=1;
    d[1]=1;
    ll temp,count;
    for(ll i=2;i<N;i++)
    {
        count=0;
        p[i]=phi(i);
        temp = p[i];
        while(temp!=1)
        {
            temp=p[temp];
            count++;
        }
        d[i]=count;
    }
}
int main()
{
    init();
    int t;
    ll m,n,k,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>m>>n>>k;
        for(ll i=m;i<=n;i++)
        {
            if(d[i]==k)
            {
                count++;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}