#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,PI,triA,inCircleA,outCircleA,inCircleR,outCircleR;
    while(cin>>a>>b>>c)
    {
        PI=acos(-1);
        s=(a+b+c)/2;
        triA=sqrt(s*(s-a)*(s-b)*(s-c));

        inCircleR=triA/s;
        inCircleA=PI*inCircleR*inCircleR;

        outCircleR=a*b*c/sqrt(2*s*(b+c-a)*(c+a-b)*(a+b-c));
        outCircleA=(PI*outCircleR*outCircleR)-triA;

        triA=triA-inCircleA;

        printf("%.4lf %.4lf %.4lf\n",outCircleA,triA,inCircleA);
    }
    return 0;
}
