#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,t,f=0,j,n,sum;
    string a,b,s[1005];
    //freopen("in.txt","r",stdin);
    while(getline(cin,a))
    {
        if(a.size()==0)break;
        f=1;
        if(a[0]=='#');
        else
        {
            i=n=0;
            while(1)
            {
                if(a[a.size()-1]=='-')
                {
                    a.erase(a.size()-1);
                    getline(cin,b);
                    a=a+b;
                    while(a[a.size()-1]=='-')
                    {
                        a.erase(a.size()-1);
                        getline(cin,b);
                        a=a+b;
                    }
                }
                s[i]=a;
                i++; a=b="";
                getline(cin,a);
                if(a[0]=='#')
                    break;
            }
            n=i;a=b="";
            map<ll,ll>mm; string str;
            for(i=0; i<n; i++)
            {
                str="";
                for(j=0; j<s[i].size(); j++)
                {
                    if(s[i][j]=='.' ||s[i][j]=='?'||s[i][j]=='!'||s[i][j]==',')
                    {
                        str+=' ';
                    }
                    else if(s[i][j]=='-' || s[i][j]=='\'' );
                    else
                        str+=s[i][j];
                }
                stringstream alu(str);
                while(alu>>a)
                {
                    mm[a.size()]++;
                }
            }
            map<ll,ll>:: iterator it;
            for(it=mm.begin(); it!=mm.end(); it++)
            {
                cout<<it->first<<" "<<it->second<<"\n";
            }
            cout<<"\n";
        }
        a=b="";
    }
    return 0;
}
