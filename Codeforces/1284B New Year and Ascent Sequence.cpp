#include <bits/stdc++.h>
using namespace std;
typedef long long int Int;
void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Int n;
    cin>>n;
    vector< vector < Int > >vs;
    vector< Int > maxs,mins;
    Int count = 0;
    for(Int i=0;i<n;i++)
    {
        Int l;
        cin>>l;
        vector< Int >v;
        Int pre=10000001;
        bool is_dec = true;
        Int temp;
        for(Int j=0;j<l;j++)
        {
            cin>>temp;
            if(pre<temp)
            {
                is_dec=false;
            }
            pre=temp;
            v.push_back(temp);
        }
        if(is_dec)
        {
            // vs.push_back(v);
            maxs.push_back(*(v.begin()));
            mins.push_back(*(v.rbegin()));
        } 
    }
    sort(maxs.begin(),maxs.end());
    for(auto it = mins.begin();it!=mins.end();it++)
    {
        // cout<<*it;
        Int beg = 0;
        Int last = Int(maxs.end()-maxs.begin())-1;
        Int mid;
        Int result = -1;
        while(last>=beg)
        {
            mid = Int((last+beg))/2;
            if(maxs[mid]>*it)
            {
                result = mid;
                last = mid-1;
            }
            else
            {
                beg=mid+1;
            }
        }
        if(result==-1)
            result = maxs.end()-maxs.begin();
        // cout<<result<<endl;
        count+=(result);
    } 
    cout<<n*n-count;
}