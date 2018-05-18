#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,j,n,m,k,sum=0;
    while(scanf("%lld",&n)==1)
    {
        ll a[m+1];sum=0;
        scanf("%lld",&m);
        for(i=0;i<m;i++)
            scanf("%lld",&a[i]);

        printf("sum:%lld\n",sum);
    }
    return 0;
}
