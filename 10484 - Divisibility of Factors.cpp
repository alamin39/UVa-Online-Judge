#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define sf scanf
#define pf printf
#define F first
#define S second
#define M 10010

bool arr[M];
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
    ll temp,cnt,ans=0;
    for(ll j=0; prime[j]<=num && j<prime.size(); j++)
    {
        temp=num;
        cnt=0;
        while(temp)
        {
            cnt+=(temp/prime[j]);
            temp/=prime[j];
        }
        mm[prime[j]]=cnt; ans+=cnt;
    }
    cout<<ans<<endl;
}


int main()
{
    //freopen("in.txt", "r", stdin);
    sieve();
    ll res,n,m,temp,test;
    sf("%lld", &test);
    for(int i=1; i<=test; i++)
    {
        sf("%lld", &n);
        pre_set(n);
        res=1;ll cnt=0;
        for(it=mm.begin(); it!=mm.end(); it++)
        {
            for(int i=0; i<it->S; i++)
            {
                res=res*(it->F);
                if(it->F %2==0)

            }
        }
        pf("Case %d: %lld\n",i,res);
        mm.clear();
    }
    return 0;
}
