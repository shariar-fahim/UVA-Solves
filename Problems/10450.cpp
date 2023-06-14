#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,a[1000];
        cin>>n;

        a[1]=2;
        a[2]=3;
        for(int i=3;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        printf("Scenario #%d:\n%lld\n\n",no++,a[n]);
    }
    return 0;
}
