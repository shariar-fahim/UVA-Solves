#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i,j,n,p,s,l;
    while(cin>>p)
    {
        if(p==0)
            break;
        scanf(" ");
        gets(a);
        l=strlen(a);
        n=l/p;
        s=0;j=0;
        while(j<l)
        {
            s=s+n;
            for(i=s-1;i>=j;i--)
            printf("%c",a[i]);
            j=j+n;
        }
        cout<<endl;
    }
    return 0;
}
