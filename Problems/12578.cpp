#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    int t,l,a;
    double w,r,tl_area,r_area,c_area;
    cin>>t;
    while(t--)
    {
        cin>>l;
        w=l*0.6;
        r=l*0.2;
        tl_area=l*w;
        c_area=PI*r*r;
        r_area=tl_area-c_area;
        printf("%.2lf %.2lf\n",c_area,r_area);
    }
    return 0;

}
