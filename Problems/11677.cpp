#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1, h2, m1, m2;
    while(cin >> h1 >> m1 >> h2 >> m2)
    {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;

        int c1 = (h1*60) + m1;
        int c2 = (h2*60) + m2;

        if(c2 < c1)
            c2 = c2 + 1440; //24*60

        cout<<c2 - c1<<endl;
    }
    return 0;
}

