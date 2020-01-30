#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a,b;
        int count=0;
        bool found=false;
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
                n/=i;
                if(count==1)
                {
                    a=i;
                }
                else
                {
                    b=i;
                }
            }
            if(count==2)
            {
                found = true;
                break;
            }
        }
        if(n!=1 && n!=a && n!=b && found)
        {
            cout<<"YES\n"<<a<<" "<<b<<" "<<n<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}