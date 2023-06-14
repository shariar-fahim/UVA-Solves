#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if (n==0) break;

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        for(int i=0;i<n;i++)
            {
                cout<<a[i];
                if(i==n-1)
                    cout<<endl;
                else
                    cout<<" ";
            }

    }
    return 0;
}
