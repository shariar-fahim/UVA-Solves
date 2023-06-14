#include<stdio.h>
int main()
{
    int t,count=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        int x=(n+1)/2;
        printf("Case %d: %d\n",count++,a[x-1]);
    }
}
