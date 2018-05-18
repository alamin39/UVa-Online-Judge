#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,t,n,m=0;
    string s;
    char c;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>s;
        stringstream alu(s);
        vector<int>q;
        vector<char>p;
        alu>>n;
        q.push_back(n);
        while(alu>>c)
        {
            alu>>n;
            p.push_back(c);
            q.push_back(n);
        }

        long long sum=0,mul=1;
        for(i=0; i<q.size(); i++)
        {
            if(p[i]=='+')
            {
                sum=0;
                while(p[i]!='*' && i<p.size())
                {
                    sum+=q[i];
                    i++;
                }
                sum+=q[i];
                mul*=sum;
            }
            else
                mul*=q[i];
        }
        //cout<<mul<<"\n";

        long long Sum=0,Mul=1;
        for(i=0; i<q.size(); i++)
        {
            if(p[i]=='*')
            {
                Mul=1;
                while(p[i]!='+' && i<p.size())
                {
                    Mul*=q[i];
                    i++;
                }
                Mul*=q[i];
                Sum+=Mul;
            }
            else
                Sum+=q[i];
        }
        //  cout<<Sum<<"\n";
        printf("The maximum and minimum are %lld and %lld.\n",mul,Sum);
    }
    return 0;
}
