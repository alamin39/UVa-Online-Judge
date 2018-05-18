#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i,n,j,l;
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); */
    string s;
    while(cin>>n && n!=0)
    {
        getchar();
        getline(cin,s);
        cout<<s<<" "<<n<<endl;
        l=0;  l=s.size();
        for(i=0;i<l;i++)
        {
            if((s[i]>='a'&& s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                s[i]+=4;
            }
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
