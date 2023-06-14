#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")


int main()
{
    ll a,b,c,d,L;
    while (cin>>a>>b>>c>>d>>L )
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0) break;
        ll cnt=0;
        for(ll x=0;x<=L;x++)
        {
            ll temp= a*x*x + b*x +c;
            if(temp%d == 0) cnt++;
        }
        cout<<cnt<<'\n';
    }
    
    return 0;
}