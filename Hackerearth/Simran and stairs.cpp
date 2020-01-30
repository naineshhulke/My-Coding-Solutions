#include<bits/stdc++.h>
using namespace std; 
int dp[30]={0};
long long recur(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    if(dp[n]==0)
        dp[n] = recur(n-1)+recur(n-2)+recur(n-3);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<recur(n);
    return 0;
}