#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct st
{
    ll num;
    string title;
};

bool comp(st a, st b)
{
    if(a.num==b.num)
        return a.title<b.title;
    return a.num>b.num;
}

int main()
{
    string s;
    ll i=0,j;
    while(getline(cin,s))
    {
        if(s=="0")
            break;
        st pro[103];
        string project[10004];
        i=0;
        map<string,ll>mm;
        map<string,bool>nn;
        map<string,string>pp;
        project[i++]=s;
        mm[project[i-1]]=0;
        while(getline(cin,s))
        {
            if(s=="1")
                break;
            if(s[0]<'a')
            {
                project[i++]=s;
                mm[project[i-1]]=0;
            }
            else
            {
                if(nn[s]==0)
                {
                    nn[s]=1;
                    mm[project[i-1]]++;
                    pp[s]=project[i-1];
                }
                else if(pp[s]!=project[i-1])
                {
                    mm[pp[s]]--;
                    pp[s]="alamin39";
                }
            }
        }
        map<string,ll>:: iterator it;
        j=0;
        for(it=mm.begin(); it!=mm.end(); it++)
        {
            if(it->first!="alamin39")
            {
                pro[j].title = it->first;
                pro[j].num = it->second;
                j++;
            }
        }
        sort(pro,pro+j,comp);
        for(int k =0; k<j; k++)
        {
            cout<<pro[k].title<<" "<<pro[k].num<<"\n";
        }
    }
    return 0;
}
