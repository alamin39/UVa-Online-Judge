#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cnt;
    string s;
    while(getline(cin,s))
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='_')
                s[i]=' ';
        }
        stringstream alu(s);
        string a,ans="",sum="";
        map<string,string>mm;
        cnt=1;
        while(alu>>a)
        {
            if(a[0]=='[' && a[a.size()-1]==']')
            {
                a[0]='\n';
                a[a.size()-1]='\n';
                ans+=a;
                mm[a]="";
            }
            else if(a[0]==']' || a[0]=='[')
            {
                a[0]='\n';
            }
            else
            {
                if(cnt==1)
                {
                    sum+=a;
                    cnt=2;
                }
                else
                    sum+=('_'+a);
            }
        }
        ans=ans+sum;
        cout<<ans<<endl;
    }
    return 0;
}
