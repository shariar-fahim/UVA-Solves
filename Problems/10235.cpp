#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,p;
    while(scanf("%d",&n)!=EOF)
    {
        p=n;
        int prime=0,emirp=0;
        for(int i=1; i<=n-1; i++)
        {
            if(n%i==0)
                prime++;

            if(prime>1)
                break;
        }
        int rem=0,rev_n=0;
        if(prime==1)
        {
            while(n!=0)
            {
                rem = n % 10;
                rev_n = rev_n * 10 + rem;
                n /= 10;
            }
            for(int i=1; i<=rev_n-1; i++)
            {
                if(rev_n%i==0)
                    emirp++;

                if(emirp>1)
                    break;
            }
            if(rev_n==p)
                emirp=2;
        }
        if(prime!=1)
            printf("%d is not prime.\n",p);
        else if (prime==1 && emirp!=1)
            printf("%d is prime.\n",p);
        else if (prime ==1 && emirp==1)
            printf("%d is emirp.\n",p);
    }
    return 0;
}
