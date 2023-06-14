#include<stdio.h>
int main()
{
    char a;
    long long int count=0;
    while(scanf("%c",&a)!=EOF)
    {
        if(a=='"')
        {
            count++;
            if(count%2==1)
                printf("``");
            else if(count%2==0)
                printf("''");
        }
        else
            printf("%c",a);
    }
    return 0;
}
