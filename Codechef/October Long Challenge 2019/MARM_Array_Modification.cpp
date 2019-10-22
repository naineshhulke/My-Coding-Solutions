#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t,n;
    long temp;
    lli k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector< long > a(n);
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a[i]=temp;
        }
        if(n%2==1 && k>n/2)
        {
            a[(int)n/2]=0;
        }
        
        while(k >= 3*n)
		    k -= 3*n;
 
		for(int i=0;i<k;i++)
		{
			lli p = a[i % n];
			lli q = a[n - (i%n) - 1];
			a[i%n] = p ^ q;
		}
        for(auto it = a.begin();it!=a.end();it++)
        {
            cout<<*it<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
