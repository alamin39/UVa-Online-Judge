#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll par[30005];

void fixing(ll n)
{
    for(ll i=1; i<=n; i++)
    {
        par[i]=i;
    }
}

ll find_par(ll n)
{
    if(par[n]==n)
        return n;
    return par[n]=find_par(par[n]);
}

void make_union(ll a,ll b)
{
    ll u=0,v=0;
    u = find_par(a);
    v = find_par(b);
    if(u!=v)
        par[u]=v;
}


int main()
{
    ll i,j,t,n,m,a,b,ans,temp;
    // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&n,&m);
        fixing(n);
        if(m==0)
            cout<<1<<"\n";
        else
        {
            set<ll>s;
            for(j=0; j<m; j++)
            {
                scanf("%lld %lld",&a,&b);
                s.insert(a);
                s.insert(b);
                make_union(a,b);
            }
            temp=ans=0;
            map<ll,ll>mm;
            set<ll>:: iterator it;
            for(it=s.begin(); it!=s.end(); it++)
            {
                temp = find_par(*it);
                mm[temp]++;
                ans=max(ans,mm[temp]);
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
