
#define int long long
#define vi vector<int>
#define rep(i,a,b) for(i=a; i<b; i++)


int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,m,x,y,z,n;
        
        cin>>n;
        vi a(n);
        rep(i,0,n) cin>>a[i];
        
        if (n == 1) { cout<<0<<'\n'; continue; }
        
        x = a[0];
        y = -1;
        
        if (x < 1) { cout<<-1<<'\n'; continue; }
        
        int ct = 1;
        
        rep(i,1,n-1)
        {
            if ( (   (y==-1) || (y != -1)&&(y < i + a[i])  )&&(x < i + a[i])  ) y = i + a[i];
            
            if ( x <= i )
            {
                if (y==-1) { cout<<-1<<'\n'; break; }
                x = y;
                ct++;
                y = -1;
            }
        }
        
        if (i == n-1) cout<<ct<<'\n';
    }
}
