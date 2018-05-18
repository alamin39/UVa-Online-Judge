#include<bits/stdc++.h> ///all pair shortest path
using namespace std;
#define ll long long int
#define sf3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define sf(x) scanf("%lld",&x)

ll mat[403][403],path[403][403],s,d,n,ans=1000000000;

void init(ll node)
{
    ll i,j;
    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
        {
            mat[i][j]=10000000;///inf
            path[i][j]=j;
        }
    }
}

void floyed(ll node)
{
    ll i,j,k;
    for(k=1; k<=node; k++)
    {
        for(i=1; i<=node; i++)
        {
            for(j=1; j<=node; j++)
            {
                if(mat[i][j]>mat[i][k]+mat[k][j])
                {
                    mat[i][j]=(mat[i][k]+mat[k][j]);
                    path[i][j]=path[i][k];
                    if(ans>mat[i][j])
                    {
                        ans=mat[i][j];
                        s=i;d=j;
                    }
                }
            }
        }
    }
}


void path_print()
{
    s=path[s][s];
    ll c=1;
    while(s!=d)
    {
        s=path[s][d];c++;
    }
    if(c==n)
        cout<<ans<<"\n";
    else
        cout<<"Impossible\n";
}


int main()
{
    ll i,j,edge,z,w; string x,y,src,dest;
    freopen("in.txt","r",stdin);
    while(scanf("%lld %lld",&n,&edge)==2)
    {
        if(n==0 && edge==0)
            break;
        init(n);
        map<string,ll>mm;
        for(i=1; i<=n; i++)
            mat[i][i]=0;

        for(i=1,z=1; i<=n; i++)
        {
            cin>>x;mm[x]=z++;
        }
        for(i=1; i<=edge; i++)
        {
            cin>>x>>y>>w;
            mat[mm[x]][mm[y]]=w;
            mat[mm[y]][mm[x]]=w;
        }
        cin>>x;
        floyed(n);
        path_print();
    }
    return 0;
}
