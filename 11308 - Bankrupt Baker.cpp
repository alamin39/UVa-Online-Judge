#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf(x) scanf("%lld",&x)

struct st
{
    string name;
    ll p;
};

bool comp(st a,st b)
{
    if(a.p==b.p)
        return a.name<b.name;
    return (a.p<b.p);
}

int main()
{
    ll i,j,n,t,k,budget,price,m,unit,ans=0;
    string name,s;
    sf(t);
    while(t--)
    {
        getchar();
        getline(cin,s);
        for(i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
            printf("%c",s[i]);
        }
        printf("\n");

        scanf("%lld %lld %lld",&m,&n,&budget);
        st recipe[n+1];
        map<string,ll>mm;
        for(i=0;i<m;i++)
        {
            cin>>s; sf(price);
            mm[s]=price+1; //cout<<s<<" "<<price<<endl;
        }

        for(i=0;i<n;i++)
        {
            getchar();
            getline(cin,recipe[i].name);//cout<<recipe[i].name<<endl;
            sf(k); bool flag=0;
            recipe[i].p=0;
            for(j=0;j<k;j++)
            {
                cin>>s; sf(unit);
                recipe[i].p+=(unit*(mm[s]-1));
            }
        }
        sort(recipe,recipe+n,comp);
      /*  for(i=0;i<n;i++)
        {
           cout<<recipe[i].p<<" "<<recipe[i].name<<endl;
        }*/
        long long int sum=0;bool fl=0;
        for(i=0;i<n;i++)
        {
             if(budget>=recipe[i].p)
                cout<<recipe[i].name<<"\n",fl=1;
        }
        if(!fl)
            printf("Too expensive!\n");

        printf("\n");
    }
    return 0;
}
