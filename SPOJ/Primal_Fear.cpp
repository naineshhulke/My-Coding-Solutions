#include<bits/stdc++.h>
using namespace std;
vector< bool > isprime(1000000,true);

int check(long long n)
{
    int length=1;
    while(n/10)
    {
        if((n%10)==0)
        {
            return 0;
        }
        n/=10;
        length++;
    }
    return length;
}

bool count_p(long long n, int length)
{
    for(int i=length;i>0;i--)
    {
        if(isprime[n%(long)pow(10,i)]==false)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    isprime[0]=isprime[1]=false;
    for(long i=0;i*i<1000000;i++)
    {
        if(isprime[i])
        {
            for(long j=i*i;j<1000000;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    vector< long > ans(1000000);
    ans[0]=ans[1]=0;
    int length;
    for(long i=2;i<1000000;i++)
    {
        length=check(i);
        if(length && count_p(i,length))
        {
            ans[i]=ans[i-1]+1;
        }
        else
        {
            ans[i]=ans[i-1];
        }
    }
    int t;
    cin>> t;
    while(t--)
    {
        long n;
        cin>>n;
        cout<<ans[n]<<'\n';
    }
}