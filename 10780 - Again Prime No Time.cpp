#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define sf scanf
#define pf printf
#define F first
#define S second
#define M 1000010

int arr[M];
vector<ll>prime;
map<ll,ll>mm;
map<ll,ll>:: iterator it;

void sieve()
{
    prime.pb(2);
    for(int i=3; i<M; i+=2)
    {
        if(!arr[i])
        {
            prime.pb(i);
            for(int j=2; i*j<M; j++)
            {
                arr[i*j]=1;
            }
        }
    }
}

void pre_set(ll num)
{
    ll temp,cnt;
    for(ll j=0; prime[j]<=num && j<prime.size(); j++)
    {
        temp=num;
        cnt=0;
        while(temp)
        {
            cnt+=(temp/prime[j]);
            temp/=prime[j];
        }
        mm[prime[j]]=cnt;
    }
}

int main()
{
    sieve();
    ll res,n,m,temp,test;
    sf("%lld", &test);
    for(int i=1; i<=test; i++)
    {
        pf("Case %d:\n",i);
        sf("%lld %lld", &m, &n);
        pre_set(n);
        res = mm[m];
     /*   if(res==0)
            pf("Impossible to divide\n");
        else*/
        pf("%lld\n",res);
        mm.clear();
    }
    return 0;
}
