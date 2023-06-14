#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    while(scanf("%s %s", a, b)!=EOF)
    {
        int counT=0,k=0;
        int lenA=strlen(a);
        for(int i=0;i<lenA;i++)
        {
            for(int j=k;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    counT++;
                    k=j+1;
                    break;
                }
            }
        }
        if(counT==lenA)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
