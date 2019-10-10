#include<bits/stdc++.h>
using namespace std;
int t;
long long int m,n;
vector< int > isprime(32001, 1);

int main()
{
    cin>>t;
    isprime[0]=isprime[1]=0;
    for(long long int i=2;i*i<=32000;i++)
    {
        if(isprime[i])
        {
            for(long long int j = i*i;j<=32000;j+=i)
            {
                isprime[j]=0;
            }
        }
    }
    while(t--)
    {
        cin>>m>>n;
        
        if(m<2)
        {
            m=2;
        }
        vector< int >a(n-m+1,1);

        for (long long int i=2;i*i<n;i++)
        {
            if(isprime[i])
            {
                for(long long int j=max(i*(long long)ceil((double)m/i),i*i);j<=n;j+=i)
                {
                    a[j-m]=false;
                }
            }
        }
        for(long long int i = m;i<=n;i++)
        {
            if(a[i-m])
            {
                cout<<i<<endl;
            }
        }
        cout<<'\n';

    }
    return 0;
}