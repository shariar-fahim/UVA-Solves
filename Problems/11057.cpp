#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        int p,i=0,j=0;

        for(int k=0;i<n;k++)
            cin>>a[k];

        cin>>p;

        for(i = 0; i < n-1; i++)
        {
            for(j = i+1; j < n - 1; j++)
            {
                if(a[i]+a[j]==p)
                {
                    printf("Peter should buy books whose prices are %d and %d.",a[i],a[j]);
                    break;
                }

            }
        }
    }
    return 0;
}


