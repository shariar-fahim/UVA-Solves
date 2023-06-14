#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,caseC=1;
    cin>>t;
    while(t--)
    {
        double c,d,e;
        cin>>c>>d;
        e=(9*c)/5+d;
        printf("Case %d: %.2lf\n",caseC++,e*5/9);
    }
    return 0;
}
