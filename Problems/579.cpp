#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m;
    char c;
    while(cin>>h>>c>>m)
    {
        if(h==0 && m==0)
            break;

        double a_m=m*6; // 1 min = 6d
        double a_h=h*30+a_m*30.0/360; //60 min(360d) = hour hand moves 5 min(30d)
        double angel=abs(a_h-a_m);
        if(angel>180) //checking if ans is more than 180d
            angel=360-angel;
        printf("%.3lf\n",angel);
    }
    return 0;
}
