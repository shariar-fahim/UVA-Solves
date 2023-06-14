#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    while(gets(ch))
    {
        for(int i=0; i<strlen(ch); i++)
        {
            printf("%c",ch[i]-7);
        }
        puts("");
    }
    return 0;
}
