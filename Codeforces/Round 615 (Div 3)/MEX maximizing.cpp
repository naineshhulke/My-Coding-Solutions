#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long q,x;
    cin>>q>>x;
    map< long long, long long >m;
    long long MEX = 0;
    while(q--)
    {
        long long temp;
        cin>>temp;
        m[temp%x]++;
        while(m[MEX%x]!=0)
        {
            m[MEX%x]--;
            MEX++;
        }
        cout<<MEX<<endl;
    }
    return 0;
}