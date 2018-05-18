#include<stdio.h>

int main()
{
    long long int n,ans=0;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)break;
        ans = 0;
        ans=(n*(n+1))/2 +1;
        printf("%lld\n",ans);
    }
    return 0;
}
