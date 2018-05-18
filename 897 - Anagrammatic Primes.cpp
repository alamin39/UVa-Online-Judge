#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool a[10000002];
vector<ll>prime;
void seive()
{
    int i,j;
    a[0]=a[1]=1;
    //prime.push_back(2);
    for(i=2; i<=10000000; i++)
    {
        if(a[i]==false)
        {
            prime.push_back(i);
            for(j=2; i*j<=10000000; j++)
            {
                a[i*j]=true;
            }
        }
    }
}

ll digit(ll n)
{
    ll c=0;
    while(n>9)
    {
        n/=10;
        c++;
    }
    return c;
}

string combi(ll n)
{
    string s="";
    while(n!=0)
    {
        s+=((n%10)+'0');
        n/=10;
    }
    return s;
}

bool check(string s)
{
    ll i,n=0,ans=0;
    for(i=0; i<s.size(); i++)
    {
        ans*=10;
        ans+=(s[i]-'0');
    }

    if(a[ans]==false)
        return true;
    return false;
}

int main()
{
    seive();
    ll i,j,t,n,m,x,y,ans;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("in.txt","r",stdin);
    string s;
    bool flag;
    while(cin>>n && n!=0)
    {
        ans=x=y=flag=0;
        x=digit(n);
        y=pow(10,x+1);
        x=upper_bound(prime.begin(),prime.end(),n)-prime.begin();
        y=upper_bound(prime.begin(),prime.end(),y)-prime.begin();
        // cout<<prime[x]<<" "<<prime[y]<<endl;
        for(i=x; i<y; i++)
        {
            s="";
            s=combi(prime[i]);
            bool f=0;
            sort(s.begin(),s.end());
            if(check(s))
            {
                while(next_permutation(s.begin(),s.end()))
                {
                    if(!check(s))
                    {
                        f=1;
                        break;
                    }
                }
                if(!f)
                {
                    cout<<prime[i]<<"\n";
                    flag=1;
                    break;
                }
            }
        }
        if(!flag)
            cout<<0<<"\n";
    }
    return 0;
}
