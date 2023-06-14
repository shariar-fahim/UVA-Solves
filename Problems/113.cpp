#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double p;
    while(scanf("%ld%lf",&n,&p)!=EOF)
    {
        printf("%.0lf\n",pow(p,1.0/n));
    }
    return 0;
}
