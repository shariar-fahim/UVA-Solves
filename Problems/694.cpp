#include<bits/stdc++.h>
using namespace std;
int main()
{
    int casE=0;
    long long int a,l;
    while(cin>>a>>l)
    {
        if(a<0 && l<0)
            break;

        long long int n=a,term=1;
        while(1)
        {
            if(a==1)
                break;
            else if (a%2==0)
            {
                a=a/2;
            }
            else
            {
                a=3*a+1;
            }
            if(a>l)
                break;
            term++;
        }
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n",++casE,n,l,term);
    }
    return 0;
}
