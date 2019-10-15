#include<bits/stdc++.h>
using namespace std;
const long long Limit = 100000001 ;
vector< bool > isprime(Limit,true);
long row=1,col=1;
int main()
{
    ios_base:sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    isprime[0]=isprime[1]=false;
    for(long i=0;i*i<Limit;i++)
    {
        if(isprime[i])
        {
            for(long j=i*i;j<Limit;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    vector< pair< long,long > >ans(Limit);
    for(long i=2;i<Limit;i++)
    {
        if(isprime[i])
        {
            ans[i].first=row;
            ans[i].second=col;
            col++;
            if(col>row)
            {
                row++;
                col=1;
            }
        }
    }
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isprime[i])
        {
            cout<<ans[n].first<<" "<<ans[n].second<<'\n';
        }
        else
        {
            cout<<-1<<"\n";
        }
        
    }
}