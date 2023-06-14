#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,casE=1;
    while(cin>>n && n>0)
    {
        int temp=1,copY=0;
        while(temp<n)
        {
            temp*=2;
            copY++;
        }
        printf("Case %d: %d\n",casE++,copY);
    }
    return 0;
}
