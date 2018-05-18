#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct st
{
    ll l,r;
};

bool comp(st a,st b)
{
    return a.r<b.r;
}

int main()
{
    ll i,j,t,m,x,y,cnt=0,a,b,n;
    bool f=0;
    freopen("in.txt","r",stdin);
    scanf("%lld",&t);
    while(t--)
    {
        if(f)
            printf("\n");
        f=1;
        st temp[100003];
        scanf("%lld",&m);
        i=cnt=0;
        while(scanf("%lld %lld",&x,&y)==2)
        {
            if(x==0&&y==0)
                break;
            if(x<=0 && y>=m)
            {
                cnt=1;
                a=x;
                b=y;
            }
            temp[i].l=x;
            temp[i].r=y;
            i++;
        }
        n=i;
        if(cnt==1)
        {
            printf("%lld\n",cnt);
            printf("%lld %lld\n",a,b);
        }
        else
        {
            sort(temp,temp+i,comp);
            ll prev=0;
            vector<ll>vv;cnt=0;
            for(i=0; i<n; i++)
            {
                if(temp[i].l==0 || temp[i].r<=0)
                {
                    prev = temp[i].r;
                    vv.push_back(i);cnt++;
                    break;
                }
            }
            bool flag=0;
            for(i=i+1; i<n; i++)
            {
                if(prev==temp[i].l)
                {
                    prev=temp[i].r;
                    vv.push_back(i);cnt++;
                }
                if(prev>=m)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0)
                printf("0\n");
            else
            {
                printf("%lld\n",cnt);
                for(j=0; j<vv.size(); j++)
                {
                    printf("%lld %lld\n",temp[vv[j]].l,temp[vv[j]].r);
                }
            }
        }
    }
    return 0;
}
