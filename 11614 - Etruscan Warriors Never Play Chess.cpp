#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t,s,ans=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&s);ans=0;
        ans = (-1+sqrt(1+(8*s)))/2;
        printf("%lld\n",ans);
    }
    return 0;
}
