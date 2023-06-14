#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,sqa,sqb,sqc;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        sqa=a*a;
        sqb=b*b;
        sqc=c*c;
        if(sqa+sqb==sqc || sqa+sqc==sqb || sqb+sqc==sqa)
        {
            cout<<"right"<<endl;
        }
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
