#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,t,n,j,m,cnt,mx;
    string name,dol;
    char c;
    //freopen("in.txt","r",stdin);
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        if(i!=1)
            printf("\n");
        scanf("%lld",&n);
        c=getchar();
        map<string,string>mm;
        map<string,ll>nn,check;
        for(j=1; j<=n; j++)
        {
            getline(cin,name);
            getline(cin,dol);//cout<<name<<" "<<dol<<endl;
            mm[name]=dol;
            check[name]=1;
        }
        scanf("%lld",&m);
        c=getchar();
        mx=cnt=0;
        for(j=1; j<=m; j++)
        {
            getline(cin,name);//cout<<name<<" "<<check[name]<<endl;
            if(check[name]==1)
            {
                nn[name]++;
                mx=max(mx,nn[name]);
            }
        }
        if(mx==0)
            printf("tie\n");
        else
        {
            map<string,ll>:: iterator it;
            cnt=0;name="";
            for(it=nn.begin(); it!=nn.end(); it++)
            {
                if(mx==it->second)
                {
                    cnt++;//cout<<cnt<<" "<<it->first<<endl;
                    name= it->first;
                }
            }

            if(cnt==1)
                cout<<mm[name]<<"\n";
            else
                printf("tie\n");
        }
    }
    return 0;
}
