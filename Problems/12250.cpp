#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int casE=1;
    while(scanf("%s",s))
    {
        if(s[0]=='#')
            break;

        printf("Case %d: ",casE++);

        if(strcmp(s,"HELLO")==0)
            printf("ENGLISH\n");

        else if(strcmp(s,"HOLA")==0)
            printf("SPANISH\n");

        else if(strcmp(s,"HALLO")==0)
            printf("GERMAN\n");

        else if(strcmp(s,"BONJOUR")==0)
            printf("FRENCH\n");

        else if(strcmp(s,"CIAO")==0)
            printf("ITALIAN\n");

        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
            printf("RUSSIAN\n");

        else
            printf("UNKNOWN\n");
    }
    return 0;
}
