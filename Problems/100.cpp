#include<stdio.h>
int main()
{
    int x,y,swap,i,j,sum=0,ans=1;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        sum=0;
        printf("%d %d ",x,y);
        if(x>y)
        {
            swap=x;
            x=y;
            y=swap;
        }
        for(i=x; i<=y; i++)
        {
            ans=1;
            for (j=i; j!=1; j=j)
            {
                if (j%2==0)
                    j=j/2;
                else
                    j=3*j+1;
                ans++;
            }
            if(ans>=sum)
                sum=ans;
        }
        printf("%d\n",sum);
    }
    return 0;
}
