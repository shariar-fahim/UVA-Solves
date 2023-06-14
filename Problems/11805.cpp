#include<stdio.h>
int main()
{
    int t,n,k,p,ans,count=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&p);
        ans=(k+p)%n;
        if(ans==0)
            printf("Case %d: %d\n",count++,n);
        else
            printf("Case %d: %d\n",count++,ans);
    }
    return 0;
}
