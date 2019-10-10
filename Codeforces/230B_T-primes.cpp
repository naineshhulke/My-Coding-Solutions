#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long temp,max=0;
    cin>>n;
    vector< long long > a(n);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a[i]=temp;
        if(temp>max)
            max=temp;
    }
    int m = sqrt(max) + 1;
    vector< bool > isprime(m+1, 1);
    isprime[0]=isprime[1]=0;
    for(int i = 2;i*i<=m;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=m;j+=i)
            {
                isprime[j]=0;
               // ndiv[j]++;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(((long long)sqrt(a[i])*(long long)sqrt(a[i])==a[i]) &&(isprime[(long)sqrt(a[i])]==1))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}

