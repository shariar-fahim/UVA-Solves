#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,count=1;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        cout<<"Case "<<count++<<": "<<sum<<endl;
    }
    return 0;
}
