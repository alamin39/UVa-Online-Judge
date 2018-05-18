#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s[12];

bool check(ll row,ll col,ll ch)
{
    if(s[row-1][col]==ch || s[row+1][col]==ch || s[row][col-1]==ch || s[row][col+1]==ch)
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,t,n,l,k;
    cin>>t;string a;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
        {
            s[j].clear();
            cin>>a;
            s[j]="0"; s[j]+=a;
        }

        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n ; k++)
            {
                if(s[j][k]=='.')
                {
                    for(l=65; l<=90; l++)
                    {
                        if(check(j,k,l)==true)
                        {
                            s[j][k]=l;
                            break;
                        }
                    }
                }
            }
        }

        cout<<"Case "<<i<<":\n";
        for(j=1; j<=n; j++)
        {
            s[j].erase(s[j].begin()+0);
            cout<<s[j]<<"\n";
        }
    }
    return 0;
}
