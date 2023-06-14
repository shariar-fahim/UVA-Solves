#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000],keys[]={"qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
    while(gets(str) && str[0]!='\0')
    {
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<36; j++)
            {
                if(keys[j]==str[i])
                {
                    str[i]=keys[j-2];
                }
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
