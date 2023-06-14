#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        char s[10][100];
        int n[10],Max=0;
        for(int i=0; i<10; i++)
        {
            scanf("%s %d",s[i],&n[i]);
            if(n[i]>Max)
            {
                Max=n[i];
            }
        }
        printf("Case #%d:\n",j++);
        for(int i=0; i<10; i++)
        {
            if(Max==n[i])
                printf("%s\n",s[i]);
        }
    }
    return 0;
}
