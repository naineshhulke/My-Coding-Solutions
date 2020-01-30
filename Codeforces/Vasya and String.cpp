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
    // freopen( "input.txt", "r", stdin );
	// freopen( "output.txt", "w", stdout );
    Int n,k;
    cin>>n>>k;
    char temp;
    vector< Int > va(n),vb(n);
    Int counta=0,countb =0;
    for(Int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp=='a')
        {
            counta++;
        }
        else
        {
            countb++;
        }  
        va[i]=counta;
        vb[i]=countb;
        
    }
    Int ans=0;
    for(Int i=0;i<=(*va.rbegin());i++)
    {
        Int len = upper_bound(va.begin(),va.end(),i+k)-lower_bound(va.begin(),va.end(),i);
        if(i!=0)
            len--;
        if(ans<len)
        {
            ans = len;
        }
        
        
    }
    for(Int i=0;i<=(*vb.rbegin());i++)
    {
        Int len = upper_bound(vb.begin(),vb.end(),i+k)-lower_bound(vb.begin(),vb.end(),i);
        if(i!=0)
            len--;
        if(ans<len)
        {
            ans = len;
        }
    }
    cout<<ans;
    return 0;
}