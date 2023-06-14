#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,f;
    cin>>t;
    while (t--)
    {
        int ans = 0;
        cin>>f;
        for(int i=0;i<f;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            ans+=a*c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
