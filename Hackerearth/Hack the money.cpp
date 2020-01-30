#include<bits/stdc++.h>
#define p 1000000007
using namespace std; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int c_z = 0,c_t=0;
        while(n%10==0)
        {
            n/=10;
            c_z++;
        }
        while(n%2==0)
        {
            n/=2;
            c_t++;
        }
        if(n==1 && c_t<=c_Z)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
    return 0;
}