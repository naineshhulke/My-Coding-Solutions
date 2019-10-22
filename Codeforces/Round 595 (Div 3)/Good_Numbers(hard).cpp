#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int q;
    bool flag;
    cin>>q;
    while(q--)
    {
        ll n,ltwo,ans=0,p=1,s=0;
        cin>>n;
        ll m=n;
        vector< int >t;
        flag=true;
        while(n)
        {
            if(n%3>1)
            {
                flag=false;
                ltwo=s;
            }
            s++;
            t.push_back(n%3);
            n/=3;
        }
        if(flag)
        {
            cout<<m<<"\n";
            continue;
        }


        for(ll i=0;i<=ltwo;i++)
        {
            t[i]=0;
        }
        for(ll i=ltwo+1;i<s;i++)
        {
            if(t[i])
            {
                t[i]=0;
            }
            else
            {
                t[i]=1;
                flag=true;
                break;
            }
        }
        for(ll i=0;i<s;i++)
        {
            ans+=p*t[i];
            p*=3;
        }
        if(flag)
        {
            cout<<ans<<"\n";
        }
        else
        {
            ans+=p;
            cout<<ans<<"\n";
        }
    }
    return 0;
}