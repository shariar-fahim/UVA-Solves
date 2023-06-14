#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int start, c1, c2, c3, ans;
    while (cin>>start>>c1>>c2>>c3)
    {
        if(start == 0 && c1==0 && c2==0 && c3==0) break;

        ans = 1080;
        ans += (start - c1) > 0 ? (start - c1) * 9 : (start - c1 + 40) * 9;
        ans += (c2 - c1) > 0 ? (c2 - c1) * 9 : (c2 - c1 + 40) * 9;
        ans += (c2 - c3) > 0 ? (c2 - c3) * 9 : (c2 - c3 + 40) * 9;
        cout<<ans<<endl;
    }
    return 0;
}
