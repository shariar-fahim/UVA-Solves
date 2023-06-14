#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans;
    string s;
    while(cin>>s)
    {
        if (s == "0") break;
        ans =0;
        for(int i=0;i<s.size();i++)
        {
            ans+=((int)s[i] - 48) * (pow(2, s.size() - i) - 1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
