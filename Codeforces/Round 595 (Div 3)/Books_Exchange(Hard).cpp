#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int q;
    ll n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        vector< ll > a(n),b(n,-1),c(n,-1);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]-=1;
            // b[a[i]-1]=i;
        }
        for(ll i=0;i<n;i++)
        {
            if(c[i]==-1)
            {
                ll cnt=1;
                c[i]=i;
                ll next=a[i];
                while(next!=i)
                {
                    c[next]=i;
                    next=a[next];
                    cnt++;
                }
                b[i]=cnt;
            }
            cout<<b[c[i]]<<" ";
            // b[a[i]-1]=i;
        }
        cout<<"\n";
    }
    return 0;
}