#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf(x) scanf("%lld",&x)

ll H(ll x)
{
    if(x<1)
        return 0;
    long sum = 0;
    int sqr = floor(sqrt(x)),i = 1, end = x,temp;
    for( ;i<=sqr; i++)
    {
        temp = x/i;
        sum+= temp + (end-temp)*(i - 1);
        end = temp;
    }

    if(x/sqr > sqr)
    {
        sum += sqr;
    }
    return sum;
}

int main()
{
    cout<<__gcd(8,10);
    ll t,n,i;
    sf(t);
    while(t--)
    {
        sf(n);
        printf("%lld\n",H(n));
    }
    return 0;
}
