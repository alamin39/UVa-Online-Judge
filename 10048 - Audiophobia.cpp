#include<bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%lld",&x)
#define sf2(x,y) scanf("%lld %lld",&x,&y)
#define sf3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ll long long int

vector<ll>g[205];
bool vis[205];
ll parent[205];
map<pair<ll,ll>,ll>nn;

void init(ll e)
{
    for(int i=0; i<=e; i++)
    {
        g[i].clear();
    }
}

ll BFS(ll src, ll dest)
{
    queue<ll>Q;
    memset(vis,0,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    bool f=0;
    ll i,test=0,ans=0;
    Q.push(src);
    vis[src]=1;
    while(!Q.empty() && !f)
    {
        src=Q.front();
        Q.pop();
        for(i=0; i<g[src].size(); i++)
        {
            test=g[src][i];
            if(!vis[test])
            {
                Q.push(test);
                parent[test]=src;
                vis[test]=1;
            }
        }
    }
    ll temp=0;
    while(parent[dest]!=-1)
    {
        temp=parent[dest];
        ans=max(ans,nn[make_pair(dest,temp)]);
        dest=temp;
    }
    return ans;
}


int main()
{
    // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ll n,m,w,t=1,k,q,u,v;
    while(sf3(n,m,q)==3)
    {
        if(n==0 && m==0 && q==0)
            break;
        init(n);
        map<string,ll>mm;
        k=1;
        for(int i=1; i<=m; i++)
        {
            sf3(u,v,w);
            g[u].push_back(v);
            g[v].push_back(u);
            nn[make_pair(u,v)]=w;
            nn[make_pair(v,u)]=w;
        }
        cout<<"Scenario #"<<t<<"\n";
        for(int i=0; i<q; i++)
        {
            sf2(u,v);
            cout<<BFS(u,v)<<"\n";
        }
        cout<<"\n";
        nn.clear();
        t++;
    }
    return 0;
}
