#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,c,nm;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        double factn=1.0,factnm=1.0,factm=1.0;
        for(int i = 1; i <= n; ++i)
        {
            factn *= i;
        }
        nm=n-m;
        for(int i = 1; i <= nm; ++i)
        {
            factnm *= i;
        }
        for(int i = 1; i <= m; ++i)
        {
            factm *= i;
        }
        c=factn/(factnm*factm);
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,c);
    }
    return 0;
}
