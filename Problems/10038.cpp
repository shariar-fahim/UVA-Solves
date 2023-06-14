#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],temp[n-1],flag=1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<=0)
                flag=0;
        }
        if(flag)
         {
             for(int i=0; i<n-1; i++)
             {
                 temp[i]=abs(a[i+1]-a[i]);
             }
         }
        if(flag==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
