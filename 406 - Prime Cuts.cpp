#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool a[8005];
vector<ll>prime;
void seive()
{
    int i,j;
    prime.push_back(1);
    prime.push_back(2);
    for(i=3; i<=8000; i+=2)
    {
        if(a[i]==false)
        {
            prime.push_back(i);
            for(j=2; i*j<=8000; j++)
            {
                a[i*j]=true;
            }
        }
    }
}

int main()
{
    seive();
    ll i,j,n,c,temp,ans;
    while(scanf("%lld %lld",&n,&c)==2)
    {
        printf("%lld %lld:",n,c);
        temp=ans=0;
        temp = upper_bound(prime.begin(),prime.end(),n)-prime.begin();
        //cout<<temp<<endl;
        if(temp%2==0)
        {
            ans = 2*c;
            temp-=ans;
            if(temp<0)
                temp=0;
            //cout<<temp<<" "<<ans<<endl;
            for(i=temp/2; prime[i]<=n && i<(temp/2)+ans; i++)
            {
                printf(" %lld",prime[i]);
            }
        }
        else
        {
            ans = (2*c)-1;
            temp-=ans;
            if(temp<0)
                temp=0;
            for(i=temp/2; prime[i]<=n && i<(temp/2)+ans; i++)
            {
                printf(" %lld",prime[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
