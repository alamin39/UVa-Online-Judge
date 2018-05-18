#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,p,n,t;
    bool f=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&p);
        f=0;
        for(i=1; i<5; i++)
        {
            scanf("%lld",&n);
            if(n-p!=1)
            {
                f=1;
            }
            p=n;
        }
        if(!f)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
