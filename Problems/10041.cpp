#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,sum,ans=10000000;
        cin>>r;
        int a[r];
        for(int i=0;i<r;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<r;i++)
        {
            sum=0;
            for(int j=0;j<r;j++)
            {
                sum+=abs(a[i]-a[j]);
            }
            ans=min(sum,ans);
        }
        cout<<ans<<endl;

    }
}
