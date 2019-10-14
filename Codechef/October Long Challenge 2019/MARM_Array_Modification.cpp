#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long temp;
    long long int k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector< long > a(n);
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a[i]=temp;
        }
        if(n%2==1 && k>n/2)
        {
            a[(int)n/2]=0;
        }
        if((k/n)%3==1)
        {
            reverse(a.begin(),a.end());
            for(int j=0;j<n/2;j++)
            {
                a[j]=a[j]^a[n-j-1];
            }
        }
        else if((k/n)%3==2)
        {
            reverse(a.begin(),a.end());
            for(int j=n/2;j<n;j++)
            {
                a[j]=a[j]^a[n-j-1];
            }
        }
        for(int i = 0;i<k%(long long)n;i++)
        {
            a[i]=a[i]^a[n-i-1];
        }
        for(auto it = a.begin();it!=a.end();it++)
        {
            cout<<*it<<' ';
        }
        cout<<'\n';
    }
    return 0;
}