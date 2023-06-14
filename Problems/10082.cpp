#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000],keys[]= {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    while(gets(str))
    {
        for(int i=0; i<47; i++)
        {
            for(int j=0; j<47; j++)
            {
                if(keys[j]==str[i])
                {
                    str[i]=keys[j-1];
                }
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
