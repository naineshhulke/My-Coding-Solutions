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
//     freopen( "input.txt", "r", stdin );
// 	freopen( "output.txt", "w", stdout );
    int n;
    cin>>n;
    vector< int >c(n);
    for(int i=0;i<n;i++)
    {
        Int temp;
        cin>>temp;
        c[i]=temp;
    }
    vector< int >t(c);
    sort(t.begin(),t.end());
    Int max_num = -1; 
    for(auto it = c.begin();it!=c.end();it++)
    {
        Int first = lower_bound(t.begin(),t.end(),*it)-t.begin();
        Int second = upper_bound(t.begin(),t.end(),2*(*it))-t.begin();
        Int num = second-first;
        if(num>max_num)
        {
            max_num=num;
        }
    }
    cout<<n-max_num;
    return 0;
}