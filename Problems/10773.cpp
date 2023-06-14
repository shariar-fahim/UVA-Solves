#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=1;
    cin>>t;
    while(t--)
    {
        double d,v,u;
        cin>>d>>v>>u;
        double ans,ans1,ans2;

        if((v==0)||(u==0)||(v>=u))
        {
            printf("Case %d: can't determine\n",cnt++);
            continue;
        }

        ans1=d/u;
        ans2=d/(sqrt((u*u)-(v*v)));

        ans= fabs(ans2-ans1);

        printf("Case %d: %.3f\n",cnt++,ans);

    }
    return 0;
}

