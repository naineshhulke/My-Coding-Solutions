#include<bits/stdc++.h>
using namespace std;
vector< bool > isprime(1000001,1);

int ndiv(long long n)
{
    int count=0;
    int ans=1;
    for(long long i=2;i<=n;i++)
    {
        if(isprime[i]==1)
        {
            count=0;
            while(n%i==0)
            {
                n/=i;
                count++;
            }
            ans=ans*(1+count);
        }
    }
    if(n!=1)
        ans*=2;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    isprime[0]=isprime[1]=0;

    for(long long i=2;i*i<=1000001;i++)
        {
         if(isprime[i]==1)
         {
             for(long long j=i*i;j<=1000001;j+=i)
             {
                 isprime[j]=0;
             }
         }
        }
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long temp;
        bool flag=1;
        cin>>n;
        vector< long >a(n);
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a[i]=temp;
        }
        sort(a.begin(),a.end());
        long long ans = (long long)a[0]*a[n-1],ans1;
        for(int i=1;i<(n+1)/2;i++)
        {
            ans1=(long long)a[i]*a[n-i-1];
            if(ans1!=ans)
            {
                cout<<-1<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
        {
            int x = ndiv(ans);
            if(x==n+2)
            {
                cout<<ans<<endl;
            }
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
