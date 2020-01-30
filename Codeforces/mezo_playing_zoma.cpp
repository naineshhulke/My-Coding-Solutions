#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = 1;
        int n;
        cin>>n;
        int a[n];
        int sumf = 0;
        int sumb =0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sumf+=a[i];
            if(sumf<=0 && i!=(n-1))
            {
                flag = 0;
            }
        }
        for(int i=n;i>=0;i--)
        {
            sumb+=a[i];
            if(sumf<=0 && i!=0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}