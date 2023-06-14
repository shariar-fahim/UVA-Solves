#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int i=0,ans=0,j=1;
        int len=s.size();
        do
        {
            if(s[i]=='O')
            {
               ans+=j;
               i++;
               j++;
            }
            else if(s[i]=='X')
            {
                i++;
                j=1;
            }
        } while(i!=len);
        cout<<ans<<endl;
    }
    return 0;
}
