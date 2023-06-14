#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,casE=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        printf("Case %d: %d\n",casE++,a[n-1]);
    }
    return 0;
}

