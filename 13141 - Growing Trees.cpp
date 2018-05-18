#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ll i,p;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a[88]= {0};
    a[0]=0;
    a[1]=1;
    a[2]=1;
    a[3]=2;
    for(i=4; i<=85; i++)
        a[i]=a[i-1]+a[i-2];

    while(cin>>p && p!=0)
    {
        cout<<a[p]<<"\n";
    }
    return 0;
}

