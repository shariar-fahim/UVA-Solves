#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
		if(a==-1 && b== -1)
        {
			break;
		}
		int c=0, d=0;
		if(a>b)
        {
			c = a - b;
			d = 100- a +b;
		}
		else
        {
			c = b-a;
			d = 100-b+a;
		}
		(c<d)?printf("%d\n", c):printf("%d\n", d);
	}
    return 0;
}
