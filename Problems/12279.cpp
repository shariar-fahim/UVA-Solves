#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,casE=1,a[0];
    while(cin>>t)
    {
        if(t==0)
            break;
        int sum=0,n;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&n);
            if(n>0)
                sum++;
            else
                sum--;
        }
        printf("Case %d: %d\n",casE++,sum);
    }
    return 0;
}
