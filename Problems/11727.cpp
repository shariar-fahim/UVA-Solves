#include<stdio.h>
int main()
{
    int t,a,b,c,ans,casee=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(b>c)
            {
                ans=b;
            }
            else if(c>a)
            {
                ans=a;
            }
            else
                ans=c;
        }
        else
        {
            if(b<c)
            {
                ans=b;
            }
            else if(c<a)
            {
                ans=a;
            }
            else
                ans=c;
        }
        printf("Case %d: %d\n",casee++,ans);
    }
    return 0;
}
