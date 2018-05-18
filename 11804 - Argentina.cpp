#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct st
{
    string name;
    ll a,d;
};

bool comp(st x,st y)
{
    if(x.a>y.a)
        return (x.a>y.a);
    else if(x.a==y.a)
        return (x.d>y.d);
}

int main()
{
    ll i,n,j,t,l;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        st temp[12];
        for(j=1; j<=10; j++)
        {
            cin>>temp[j].name>>temp[j].a>>temp[j].d;
        }
        sort(temp+1,temp+10,comp);
        vector<string>vv,v;
        for(j=1;j<=5;j++)
        {
            v.push_back(temp[j].name);
        }
        sort(v.begin(),v.end());
        for(j=6;j<=10;j++)
        {
            vv.push_back(temp[j].name);
        }
        sort(vv.begin(),vv.end());
        cout<<"Case "<<i<<":\n";
        cout<<"("<<vv[0];
        for(j=1; j<5; j++)
            cout<<", "<<vv[j];

        cout<<")\n"<<"("<<v[0];

        for(j=1; j<5; j++)
            cout<<", "<<v[j];
        cout<<")\n";
    }
    return 0;
}
