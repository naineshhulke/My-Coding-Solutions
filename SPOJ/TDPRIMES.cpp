#include<bits/stdc++.h>
using namespace std;
const long limit = 100000000;
vector< bool > sieve(limit + 1,true);
long long i = 0;
int main()
{
    sieve[0]=sieve[1]=false;
    i=4;
    while(i<=limit)
    {
        sieve[i]=false;
        i+=2;
    }
    for(long long int i=2;i*i<=limit;i++)
    {
        if(sieve[i])
        {
            for(long long int j=i*i;j<=limit;j+=i)
            {
                sieve[j]=false;
            }
        }
    }
    long count = 0;
    for(long long int i = 2;i<=limit;i++)
    {
        if(sieve[i])
        {
            count++;
            if(count%100==1)
            {
                cout<<i<<endl;
            }
        }
    }
}