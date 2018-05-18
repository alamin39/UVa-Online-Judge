#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,j,s,k;
    while(scanf("%lld",&s)==1)
    {
        if(s==0)
            break;
        ll a[s+1];

        for(i=1; i<=s; i++)
            scanf("%lld",&a[i]);

        k=6;
        ll l,cnt=1,temp=j=6;
        ll limit=1;
        while(1)
        {

            for(i=1; i<=6-limit; i++)
            {
                cout<<a[i]<<" ";
            }
            cnt=0;
            for( ; j<=s && cnt<limit; j++)
            {
                if(cnt==limit-1)
                    cout<<a[j];
                else
                    cout<<a[j]<<" ";
                cnt++;
            }
            cout<<"\n";
            if(j>s)
            {
                limit++;
                j=s-limit+1;
                if(j==1)break;
            }
        }
    }
    return 0;
}
