#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,a,sum=0,t,posi,negi,f;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        sum=posi=negi=0;
        for(i=1; i<=t; i++)
        {
            scanf("%lld",&a);
            if(a>0)
                posi+=a;
            else
                negi+=abs(a);
            sum+=abs(posi-negi);
        }

        printf("%lld\n",sum);
    }
    return 0;
}
