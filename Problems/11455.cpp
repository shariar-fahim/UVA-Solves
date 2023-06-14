#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d)
            cout<<"square"<<endl;
        else if((a==b && c==d) || (b==c && d==a) || (a==c&& b==d))
            cout<<"rectangle"<<endl;
        else if((a<=b+c+d) && (b<=c+d+a) && (c<=d+a+b) && (d<=a+b+c))
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
    }
    return 0;
}
