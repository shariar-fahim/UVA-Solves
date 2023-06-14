#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,h,p,maxD=0,cnt=0,k;
        cin>>l>>h;
        for(int i=l; i<=h; i++)
        {
            k=sqrt(i);
            for(int j=1; j<=k; j++)
            {
                if(i%j==0)
                {
                    cnt++;
                    if(i/j!=j)
                    {
                        cnt++;
                    }
                }
                if(maxD<cnt)
                {
                    maxD=cnt;
                    p=i;
                }
            }
            cnt=0;
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,p,maxD);
    }
    return 0;
}
