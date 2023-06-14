#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    while(scanf("%lld",&x)!=EOF)
    {
        long long int i,sum=0;
        for(i=1;i<=x;i++)
        {
            sum=sum+(i*i*i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
