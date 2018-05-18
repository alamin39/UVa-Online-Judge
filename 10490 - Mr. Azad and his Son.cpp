#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

bool prime(ll n)
{
    ll i,j;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    ll i,j,p,ans;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>p && p!=0)
    {
        ans =0;
        ans = pow(2,p)-1;
        if(prime(ans)==true)
        {
            ans*=pow(2,p-1);
            cout<<"Perfect: "<<ans<<"!\n";
        }
        else if(prime(p)==true)
            cout<<"Given number is prime. But, NO perfect number is available.\n";
        else
            cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
    return 0;
}
