#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,a,b,c;
    cin>>t;
    long int i=1;
    while(t--)
    {
        cin>>a>>b>>c;
        if ((a+b)<=c || (b+c)<=a || (c+a)<=b || a<=0 || b<=0 || c<=0)
            printf("Case %ld: Invalid\n",i++);
        else if(a==b && b==c && c==a)
            printf("Case %ld: Equilateral\n",i++);
        else if(a==b || b==c || c==a)
            printf("Case %ld: Isosceles\n",i++);
        else
            printf("Case %ld: Scalene\n",i++);
    }
    return 0;
}
