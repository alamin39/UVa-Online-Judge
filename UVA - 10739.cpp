#include<bits/stdc++.h>
using namespace std;
#define ll int

string s;
ll dp[1001][1001];

ll calc(ll i,ll j)
{
    if(i>=j)
        return 0;
    if(dp[i][j]!= -1)
        return dp[i][j];

    if(s[i]==s[j])
       return dp[i][j] = calc(i+1,j-1);
    else
    {                          ///replace
        return dp[i][j]=min(1+calc(i+1,j-1),min(1+calc(i,j-1),1+calc(i+1,j)));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,t,n,ans=0;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>s;
        n=s.size();
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<i<<": "<<calc(0,n-1)<<"\n";
    }
    return 0;
}
