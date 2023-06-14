#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)&& a!=0 && b!=0)
    {
        int count=0;
        for(int i=a;i<=b;i++)
        {
            int temp=sqrt(i);
            //printf("temp = %d\n",temp);
            if(temp*temp==i)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
