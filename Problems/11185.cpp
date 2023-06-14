#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    string s;
    while(cin>>n)
    {
        if (n<0) break;
        if(n==0) cout<<0<<endl;

        else
        {
            i=1;
            while(n!=0)
            {
                s[i++]=n%3;
                n=n/3;
            }
            for(j=i-1; j>0; j--)
            {
                printf("%d", s[j]);
            }
            cout<<endl;
        }
    }
return 0;
}
