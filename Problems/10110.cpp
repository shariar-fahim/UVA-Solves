#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)&&n!=0)
    {
        long long int temp=sqrt(n);
        if(temp*temp==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
