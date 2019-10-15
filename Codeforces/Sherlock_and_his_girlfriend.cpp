#include<bits/stdc++.h>
using namespace std;
const int L = 100009;
vector< bool >isprime(L,true);
void sieve()
{
    isprime[0]=isprime[1]=false;
    for(int i=0;i*i<L;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<L;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    cin>>n;
    if(n>2)
    {
        cout<<"2\n";
    }
    else
    {
        cout<<"1\n";
    }
    for(int i=2;i<=n+1;i++)
    {
        if(isprime[i])
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"2 ";
        }
    }
    return 0;
}