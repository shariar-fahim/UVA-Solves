#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,f;
        cin>>a>>f;
        for(int k=0;k<f;k++)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<<i;
                }
                printf("\n");
            }
            for(int i=a-1; i>=1; i--)
            {
                for(int j=i; j>=1; j--)
                {
                    cout<<i;
                }
                printf("\n");
            }
            if(k!=f-1)
                printf("\n");
        }
        if(t)
            printf("\n");
    }
    return 0;
}
