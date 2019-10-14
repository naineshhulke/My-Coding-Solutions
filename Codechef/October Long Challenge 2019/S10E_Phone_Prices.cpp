#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        vector< int > prices(5,1000);
        int p;
        for(int i=0;i < n; i++ )
        {
            cin>>p;
            if(*min_element(prices.begin(),prices.end()) > p)
            {
                count++;
            }
            for(int j=0;j<4;j++)
            {
                prices[j]=prices[j+1];
            }
            prices[4]=p;
        }
        cout<<count<<'\n';
    }
    return 0;
}