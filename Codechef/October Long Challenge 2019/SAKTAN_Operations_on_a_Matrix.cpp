#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        long long int n,m,q,qr,qc;
        cin>>n>>m>>q;
        map< long long , long long >r, c;
        for(long long i=0;i<q;i++)
        {
            cin>>qr>>qc;
            if(r[qr])
            {
                r.erase(qr);
            }
            else
            {
                r[qr]++;
            }
            if(c[qc])
            {
                c.erase(qc);
            }
            else
            {
                c[qc]++;
            }
        }
        long long int row_size = r.size();
        long long int col_size = c.size();
        long long int ans = m*row_size+n*col_size-2*row_size*col_size;
        // cout<<"row "<<r.size()<<endl<<"col "<<col_size<<endl;
        cout<<ans<<'\n';
    }
    return 0;
}