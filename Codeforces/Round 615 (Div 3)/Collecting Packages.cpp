#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ans="";
        bool flag=true;
        vector< pair<int,int> >s;
        s.push_back(make_pair(0,0));
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            s.push_back(make_pair(x,y));
        }
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i+1].second>=s[i].second)
            {
                for(int l=0;l<s[i+1].first-s[i].first;l++)
                {
                    ans+='R';
                }
                for(int l=0;l<s[i+1].second-s[i].second;l++)
                {
                    ans+='U';
                }
            }
            else
            {
                flag=false;
                break;
            }   
        }
        if(flag)
        {
            cout<<"YES\n"<<ans<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}