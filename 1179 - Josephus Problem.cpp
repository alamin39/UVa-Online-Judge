#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll josephus(ll n, ll k)
{
    if(n==1)
        return 1;
    else
        return (josephus(n-1,k)+ k-1)%n + 1;
}


int main()
{
    ll t,i,n,m;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);
        printf("Case %lld: %lld\n",i,josephus(n,m));
    }
    return 0;
}
