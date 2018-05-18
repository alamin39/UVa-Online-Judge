#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf

int main()
{
    double a,b,c,s,r,area;
    while(sf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=r=area=0;
        s=(a+b+c)/2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        if(area==0 || a+b+c==0)
            r=0;
        else
            r = (2.0*area)/(a+b+c); ///radius of the incircle
        pf("The radius of the round table is: %.3lf\n",r);
    }
    return 0;
}
