/// Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,c,n,m,t,mx,ans=0;
    bool f=0,flag=0;
    while(cin>>n && n)
    {
        bool vis[n];
        vector<ll>a[n];
        m=n;
        for(i=0; i<n; i++)
        {
            vis[i]=0;
            for(j=0; j<5; j++)
            {
                cin>>m;
                a[i].push_back(m);
            }
            sort(a[i].begin(),a[i].end());
        }

        mx=ans=c=0;
        for(k=0; k<n; k++)
        {
            ans=0;
            for(i=0; i<n; i++)
            {
                f=0;
                if(vis[i]==0)
                {

                    for(j=0; j<5; j++)
                    {
                        // cout<<a[i][j]<<" ";
                        if(a[k][j]!=a[i][j])
                        {
                            f=1;
                            break;
                        }
                    }
                    // cout<<endl;
                    if(!f)
                        vis[i]=1,ans++;
                }
            }
            if(mx==ans)
                c++;
            else if(mx<ans){
                c=1;
            mx=max(mx,ans);}
        }
        if(mx==1)
            cout<<n<<endl;
        else
            cout<<mx*c<<endl;
    }
    return 0;
}
