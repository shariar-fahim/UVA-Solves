#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        int ans=0;
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    swap(a[j],a[j+1]);
                    ans++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", ans);
    }

    return 0;
}

