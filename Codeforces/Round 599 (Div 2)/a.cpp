#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n;
        vector< int >a(n),b(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int temp = a[i];
            for(int j=1;j<=a[i];j++)
            {
                b[j]++;
            }
        }
        for(int i=n;i>=0;i--)
        {
            if(b[i]>=i)
            {
                cout<<b[i]<<'\n';
            }
        }
    }
    return 0;
}