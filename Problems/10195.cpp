#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,i,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a<=0||b<=0||c<=0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            i=(a+b+c)/2;
            r=sqrt((i-a)*(i-b)*(i-c)/i);
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
