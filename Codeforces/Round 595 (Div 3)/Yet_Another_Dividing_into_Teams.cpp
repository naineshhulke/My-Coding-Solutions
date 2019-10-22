#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int q,n;
    bool ans;
    cin>>q;
    while(q--)
    {
        cin>>n;
        bool ans=false;
        vector< int > a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])==1)
            {
                ans=true;
                break;
            }
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}