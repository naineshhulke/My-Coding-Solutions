#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long count=0,up=0;
        long long m,n;
        cin>>n>>m;
        stack< long long > s;
        vector< long long > v,vs(n);
        map< long long, long long >ma;
        for( long long i=n-1;i>=0;i--)
        {
            long long temp;
            cin>>temp;
            vs[i]=temp;
        }
        for(auto it = vs.begin();it!=vs.end();it++)
        {
            s.push(*it);
        }
        for(long long i=0;i<m;i++)
        {
            long long temp;
            cin>>temp;
            v.push_back(temp);
            ma[temp]++;
        }
        
        
        for(long long i=0;i<m;i++)
        {
            if(ma[v[i]]==0)
            {
                up--;
            }
            
            else
            {
                while(s.top()!=v[i])
                {
                    if(ma[s.top()]==1)
                    {
                        count++;
                        ma[s.top()]=0;
                    }
                    s.pop();
                    up++;
                }
                s.pop();
                count+=((up*2)+1);
            }
        }
        cout<<count<<endl;
    }
}