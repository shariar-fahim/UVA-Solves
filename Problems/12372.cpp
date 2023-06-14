#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,casE=1;
    cin>>t;
    while(t--)
    {
        int l,w,h;
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
            printf("Case %d: good\n",casE++);
        else
            printf("Case %d: bad\n",casE++);
    }
    return 0;
}
