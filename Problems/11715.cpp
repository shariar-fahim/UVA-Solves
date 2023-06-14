#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case=1;
    double x,u,v,t,s,a;
    while(cin>>x&&x!=0)
    {
        cout<<"Case "<<Case++<<": ";
        if(x==1)
        {
            cin>>u>>v>>t;
			a=(v-u)/t;
			s=((u+v)/2)*t;
			printf("%.3lf %.3lf\n", s, a);
        }
        else if(x==2)
        {
            cin>>u>>v>>a;
			t=(v-u)/a;
			s=((u+v)/2)*t;
			printf("%.3lf %.3lf\n", s, t);
        }
        else if(x==3)
        {
            cin>>u>>a>>s;
			v=((u*u)+2*a*s);
			v=sqrt(v);
			t=(v-u)/a;
			printf("%.3lf %.3lf\n", v, t);
        }
        else if(x==4)
        {
            cin>>v>>a>>s;
			u=(v*v)-2*a*s;
			u=sqrt(u);
			t=(v-u)/a;
			printf("%.3lf %.3lf\n", u, t);
        }
    }
    return 0;
}
