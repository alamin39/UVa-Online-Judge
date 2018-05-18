#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf

int main()
{
    double a,b,c,s,ans,r,area,diameter,x,x1,y,y1,x2,y2;
    while(sf("%lf %lf %lf %lf %lf %lf",&x,&y,&x1,&y1,&x2,&y2)==6)
    {
        a=b=c=0;
        a = sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
        b = sqrt(((x-x2)*(x-x2))+((y-y2)*(y-y2)));
        c = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

        s=ans=r=area=diameter=0;
        s=(a+b+c)/2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));

        diameter = (a*b*c)/(2.0*area);
        r = diameter/2.0;
        ans = 2*3.141592653589793*r;
        pf("%.2lf\n",ans);
    }
    return 0;
}

