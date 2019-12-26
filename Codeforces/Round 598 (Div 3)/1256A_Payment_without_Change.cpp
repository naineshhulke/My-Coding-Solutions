#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll q,a,b,n,s;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>n>>s;
        ll temp;
        temp = s/n;
        if((s-a*min(temp,a))<b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}