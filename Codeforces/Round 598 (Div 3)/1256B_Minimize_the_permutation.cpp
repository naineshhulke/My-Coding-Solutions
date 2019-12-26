#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll q,n,m;
    cin>>q;
    while(q--)
    {
        cin>>n;
        vector< ll >a(n),b;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll it = min_element(a.begin()+i,a.end())-a.begin();
            ll min = a[it];
            cout<<min<<" ";
            if(it!=i)
            {
                ll temp = a[it];
                a[it]=a[it-1];
                a[it-1]=temp;
            }
            while(a[i]!=min)
            {
                cout<<a[i]<<" ";
                i++;
            }
        }
        cout<<'\n';
    }
    return 0;
}