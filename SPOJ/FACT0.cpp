#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll n,cnt=0;
    while(scanf("%llu",&n))
    {
        if(n==0)
        {
            break;
        }
        // cout<<n<<endl;
        for(ll i=2;i*i<=n;i++)
        {
            cnt=0;
            while(n%i == 0)
            {
                n/=i;
                cnt++;
            }
            if(cnt)
            {
                cout<<i<<"^"<<cnt<<" ";
            }
        }
        if(n!=1)
        {
            cout<<n<<"^1 ";
        }
        cout<<"\n";
    }
}