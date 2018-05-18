#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    long long int i,t,n,s,j,m,ans=0;
    while(scanf("%lld",&s)==1)
    {
        if(s==-1)
            break;
        ans=n=0;
        ans = (-1+sqrt(1+(8*s)))/2;
        n=(ans*(ans+1))/2;
        if(n==s)
        {
            printf("%lld = 1 + ... + %lld\n",s,ans);
        }
        else if(n<s)
        {
            ans++;m=0;
            m = (ans*(ans+1))/2;
            if(m==s)
            {
                printf("%lld = 1 + ... + %lld\n",s,ans);
            }
            else
            {
                j=1;
                while(m>s)
                {
                    m-=j;
                    j++;
                }
                if(m==s)
                {
                    printf("%lld = %lld + ... + %lld\n",s,j,ans);
                }
                else
                    printf("%lld = %lld + ... + %lld\n",s,s,s);
            }
        }
        else
        {
            j=1;
            while(n>s)
            {
                n-=j;
                j++;
            }
            if(n==s)
            {
                printf("%lld = %lld + ... + %lld\n",s,j,ans);
            }
            else
                printf("%lld = %lld + ... + %lld\n",s,s,s);
        }
    }
    return 0;
}
