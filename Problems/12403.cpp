#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int sum=0;
    char s[100];
    cin>>t;
    while(t--)
    {
        int x;
        scanf("%s",s);
        if(strcmp(s,"donate")==0)
        {
            cin>>x;
            sum+=x;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
