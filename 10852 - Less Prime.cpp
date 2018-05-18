#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool a[10005];
vector<ll>prime;
void seive()
{
    int i,j; prime.push_back(2);
    for(i=3; i<=10000; i+=2)
    {
        if(a[i]==false)
        {
            prime.push_back(i);
            for(j=2; i*j<=10000; j++)
            {
                a[i*j]=true;
            }
        }
    }
}


int main()
{
    seive();
    ll i,j,t,n,ans;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans = upper_bound(prime.begin(),prime.end(),n/2)-prime.begin();
        cout<<prime[ans]<<"\n";
    }
    return 0;
}
