#include<bits/stdc++.h>
using namespace std;

long long int isHappy(long long int a)
{
    long long int sum=0;
    if(a==1 || a==4)
        return a;

    while(a!=0)
    {
        sum+=((a%10)*(a%10));
        a/=10;
    }
    isHappy(sum);
}

int main()
{
    long long int n,Count=1,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        {
            if(isHappy(n)==1)
                printf("Case#%lld: %lld is a Happy Number.\n",Count++,n);
            else if (isHappy(n)==4)
                printf("Case#%lld: %lld is a Unhappy Number.\n",Count++,n);
        }
    }
    return 0;
}
