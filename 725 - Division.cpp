#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool first,sec;

ll func(ll a,ll b)
{
    map<ll,bool>mm;
    first=sec=0;
    bool f;
    ll cnt,ans=a,temp;
    f=cnt=0;
    while(ans!=0)
    {
        temp = ans%10;
        ans/=10;
        cnt++;
        mm[temp]=1;
    }

    if(cnt!=5)
    {
        mm[0]=first=1;
    }

    f=cnt=0;
    ans=b;
    while(ans!=0)
    {
        temp = ans%10;
        ans/=10;
        cnt++;
        if(mm[temp])
        {
            f=1;
            break;
        }
        mm[temp]=1;
    }
    if(!f)
    {
        if(cnt!=5)
            sec=1;
        if(cnt!=5&& mm[0]==1)
            f=1;
    }
    return f;
}


int main()
{
    ll i,j,n,ans,cnt,temp=0;
    bool f=0,flag=0;
    vector<ll>vv;
    map<ll,bool>nn;
    for(i=1234; i<=98765; i++)
    {
        map<ll,bool>mm;
        ans=i;
        f=cnt=0;
        while(ans!=0)
        {
            temp = ans%10;
            ans/=10;
            cnt++;
            if(mm[temp])
            {
                f=1;
                break;
            }
            mm[temp]=1;
        }
        if(!f)
        {
            if(cnt!=5 && mm[0]==1);
            else
            {
                vv.push_back(i);
                nn[i]=1;
            }
        }
    }
    //cout<<vv.size()<<endl;
    ll l=vv.size();
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(flag)
            cout<<"\n";
        f=0;
        flag=1;
        for(i=0; i<l; i++)
        {
            if(nn[vv[i]*n]==1)
            {
                if(func(vv[i]*n,vv[i])==0)
                {
                    if(first)
                        cout<<0<<vv[i]*n<<" / ";
                    else
                        cout<<vv[i]*n<<" / ";

                    if(sec)
                        cout<<0<<vv[i]<<" = "<<n<<"\n",f=1;
                    else
                        cout<<vv[i]<<" = "<<n<<"\n",f=1;

                }
            }
        }
        if(!f)
            cout<<"There are no solutions for "<<n<<".\n";
    }
    return 0;
}
