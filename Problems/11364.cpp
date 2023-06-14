#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,sum=0;
        cin>>s;
        int p[s];
        for(int i=0;i<s;i++)
        {
            cin>>p[i];
        }
        sort(p,p+s);

        int k=s/2;
        //cout<<k;
        sum=((p[k]-p[0])*2)+((p[s-1]-p[k])*2);
        cout<<sum<<endl;
    }
    return 0;
}
