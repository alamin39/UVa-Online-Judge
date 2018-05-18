/// "Bismillahirrahmanirrahim"
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

bool a[102][102];

int main()
{
    ll i,j,n,t,m,k,mx=0,x,ans=0;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld",&m);
            for(j=0; j<m; j++)
            {
                scanf("%lld",&x);
                a[i][x]=1;
            }
        }
    }
    return 0;
}
