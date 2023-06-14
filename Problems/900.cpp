#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fibonacci[100];
    while(cin>>n)
    {
        if(n==0) break;

        fibonacci[0]=1;
        fibonacci[1]=1;

        for(int i=2;i<=n;i++)
        {
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
        printf("%d\n",fibonacci[n]);
    }
    return 0;
}
