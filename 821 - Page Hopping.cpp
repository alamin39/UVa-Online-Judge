#include<bits/stdc++.h> ///all pair shortest path
using namespace std;
#define ll long long int
#define sf2(x,y) scanf("%lld %lld",&x,&y)
#define sf(x) scanf("%lld",&x)

ll mat[103][103];

void init(ll node)
{
    ll i,j;
    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
        {
            mat[i][j]=100000;
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
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
}


int main()
{
    ll i,j,k=1,node,edge,sum,w,src,dest,t=0;
    while(sf2(node,edge)==2)
    {
        if(node==0 && edge==0)
            break;
        map<ll,ll>mm;
        src=0;
        k=1;
        init(100);

        if(mm[node]==0)
            mm[node]=k,k++;
        if(mm[edge]==0)
            mm[edge]=k,k++;
        mat[mm[node]][mm[edge]]=1;

        while(sf2(node,edge))
        {
            if(node==0 && edge==0)
                break;
            if(mm[node]==0)
                mm[node]=k,k++;
            if(mm[edge]==0)
                mm[edge]=k,k++;
            mat[mm[node]][mm[edge]]=1;
        }
        src=k-1;
        for(i=1;i<=src;i++)
            mat[i][i]=0;

        floyed(src);
        sum=0;
        for(i=1; i<=src; i++)
        {
            for(j=1; j<=src; j++)
            {
                //cout<<mat[i][j]<<" ";
                if(mat[i][j]!=100000)
                    sum+=mat[i][j];
            }
            //cout<<"\n";
        }
      //  cout<<sum<<"    "<<src*(src-1)<<endl;
        printf("Case %lld: average length between pages = %.3lf clicks\n",++t,sum/(1.0*src*(src-1)));
    }
    return 0;
}
