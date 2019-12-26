#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n,c=0;
        string s,t;
        cin>>n>>s>>t;
        int a,b;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                if(c==0)
                {
                    a=i;
                }
                else if(c==1)
                {
                    b=i;
                }
                else
                {
                    flag=false;
                    cout<<"NO\n";
                    break;
                }
                c++;
            }
        }
        // cout<<a<<endl<<b;
        if(flag)
        {
            if(c==2){
                char z = s[a];
                s[a] = t[b];
                t[b] = z;
                if(s==t)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}