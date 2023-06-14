#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    while(scanf("%s",s)!=EOF)
    {
        int len=strlen(s);
        int sum=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                sum+=s[i]-96;
            }
            if(s[i]>='A' && s[i]<='Z')
            {
                sum+=s[i]-38;
            }
        }

        int c=0;
        for (int i=2; i<=sum-1; i++)
        {
            if(sum%i==0)
                {
                    c=1;
                    break;
                }
        }
        if (c==0)
            printf ("It is a prime word.\n");
        else
            printf ("It is not a prime word.\n");
    }
    return 0;
}
