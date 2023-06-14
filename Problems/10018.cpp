#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,loop,temp=0,rev_num;
        cin>>n;
        temp=n;
        loop=0;
        while(1)
        {
            rev_num=0;
            while(n!=0)
            {
                rev_num=rev_num*10+n%10;
                n/=10;
            }
            if(temp==rev_num)
                break;
            else
            {
                temp=temp+rev_num;
                n=temp;
                loop++;
            }
        }
        printf("%lld %lld\n",loop,rev_num);
    }
    return 0;
}
