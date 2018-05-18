#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define min_to_deg 0.0166667
#define deg_to_Radian 0.0174533
#define PI 2*acos(0.0)

int main()
{
    ll i,j;
    double ans,r=0,d=0;
    string s;
    while(sf("%lf",&r)==1)
    {
        sf("%lf",&d);
        r+=6440.0;
        cin>>s;
        ans=0;
        if(d>180)
            d=360-d;
        if(s=="min")
            d = d/60.0;
        d = (PI*d)/180.0;
        ///  ans = 2*r*sin(d/2.0);
        ans = sqrt((r*r)+(r*r)-(cos(d)*2*r*r));
        printf("%.6lf %.6lf\n",r*d,ans);
        r=d=0;
    }
    return 0;
}
