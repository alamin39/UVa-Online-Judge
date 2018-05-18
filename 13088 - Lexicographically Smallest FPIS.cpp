#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,p,n,t;
    bool f=0;string s;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        set<char>st;
        for(i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        for(i=0;i<s.size()-st.size();i++)
            cout<<s[0];
        set<char>:: iterator it;
        for(it=st.begin();it!=st.end();it++)
            cout<<*it;
        cout<<"\n";
    }
    return 0;
}
