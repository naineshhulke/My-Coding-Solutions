#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long x;
    cin>>x;
    long long a,b;
    for(long long i = (long long int)(sqrt(x)); i>=1;i--)
    {
        if(x%i == 0 && __gcd(i,x/i)==1)
        {
            a = i;
            b = x/i;
            break; 
        }
    }
    cout<<a<<" "<<b;
    return 0;
}