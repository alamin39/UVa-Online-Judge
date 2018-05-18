#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,j,t,n,ans,k;
   // freopen("in.txt","r",stdin);
    scanf("%lld",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%lld",&n);
        ll a[n+1],b[n+1];
        bool m[n+1],mark[n+1];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&b[i]);
        }
        sort(b,b+n);
        ans=0;

        for(i=0; i<n; i++)
        {
            for(k=n-1; k>=0; k--)
            {
               if(a[i]>b[k] && mark[k]==0)
               {
                   mark[k]=1;m[i]=1;
                   ans+=2;
                   break;
               }
            }
        }

        for(i=0; i<n; i++)
        {
            if(m[i]==0)
            {
                for(k=0; k<n; k++)
                {
                    if(mark[k]==0 && a[i]==b[k])
                    {
                        mark[k]=m[i]=1;
                        ans++;
                        //cout<<a[i]<<" "<<b[k]<<" "<<ans<<endl;
                        break;
                    }
                }
            }
        }
        printf("Case %lld: %lld\n",j,ans);
    }
    return 0;
}
