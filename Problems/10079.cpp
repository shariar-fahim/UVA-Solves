#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
            break;
        printf("%lld\n",(n*(n+1))/2+1);
    }
    return 0;
}
