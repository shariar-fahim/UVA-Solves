#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,r;
    int t;
    cin>>t;
    while(t--){
        cin>> x>> y>> r;
        double a = (x*x)+(y*y);
        //cout<<a<<endl;
        a=sqrt(a);
        double l=r+a;
        double s=r-a;
        printf("%.2lf %.2lf\n",s,l);
    }
    return 0;
}
