#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool a[32055];
vector<ll>prime;
void seive()
{
    int i,j;prime.push_back(0);
    prime.push_back(2);
    for(i=3; i<=32050; i+=2)
    {
        if(a[i]==false)
        {
            prime.push_back(i);
            for(j=2; i*j<=32050; j++)
            {
                a[i*j]=true;
            }
        }
    }
}


int main()
{
    seive();
    ll i,j,t,n,m,x,y,ans;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("in.txt","r",stdin);
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        x=y=0;
        for(i=0;i<prime.size();i++)
        {
            if(prime[i]>=min(m,n))
            {
                x=i;break;
            }
        }
        for(i=0;i<prime.size();i++)
        {
            if(prime[i]>max(m,n))
            {
                y=i; break;
            }
        }
        //cout<<prime[x]<<"  "<<prime[y-1]<<endl;
        for(i=x; i<y; )
        {
            if(prime[i+1]-prime[i]== prime[i+2]-prime[i+1] && i+2<y)
            {
                vector<ll>v;
                v.push_back(prime[i]);
                v.push_back(prime[i+1]);
                v.push_back(prime[i+2]);
                j=i+2;
                bool f=0;
                while(j<y&&(prime[j+1]-prime[j]) == (prime[i+1]-prime[i]))
                {
                    v.push_back(prime[j+1]);
                    j++;
                    f=1;
                }
                if(j!=y && (prime[i]-prime[i-1]) != (prime[i+1]-prime[i]))
                {
                    cout<<v[0];
                    for(int k=1;k<v.size();k++)
                        cout<<" "<<v[k];
                    cout<<"\n";
                }
                else if( j==y && ((prime[j]-prime[j-1])!=(prime[i+1]-prime[i])))
                {
                    cout<<v[0];
                    for(int k=1;k<v.size()-1;k++)
                        cout<<" "<<v[k];
                    cout<<"\n";
                }
                if(f)
                    i=j-1;
                else
                    i=j;
            }
             else
                i++;
        }
    }
    return 0;
}
