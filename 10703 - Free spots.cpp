#include<bits/stdc++.h>
using namespace std;
#define sf(x,y) scanf("%lld %lld",&x,&y)

int main()
{
    long long i,j,w,h,n,x,x1,y1,y;
    while(scanf("%lld %lld %lld",&w,&h,&n)==3)
    {
        if(w==0 && h==0&& n==0)
            break;
        bool a[w+1][h+1];
        memset(a,0,sizeof(a));
        for(i=0; i<n; i++)
        {
            sf(x,y);
            sf(x1,y1);
            for(j=min(x,x1); j<=max(x,x1); j++)
            {
                for(long long k=min(y,y1); k<=max(y,y1); k++)
                    a[j][k]=1;
            }
        }
        long long cnt=0;
        for(i=1; i<=w; i++)
        {
            for(j=1; j<=h; j++)
            {
                if(a[i][j]==0)
                    cnt++;
            }
        }
        if(cnt==0)
            printf("There is no empty spots.\n");
        else if(cnt==1)
            printf("There is one empty spot.\n");
        else
            printf("There are %lld empty spots.\n",cnt);
    }
    return 0;
}
