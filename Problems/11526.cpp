#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")

long long H(ll n)
{
    long long res = 0,sum=0;
    for( ll i = 1; i*i <= n; i++ )
        {
            ll temp = n/i;
            ll count = temp- n/(i+1);
            sum+=(ll)i * count + (temp == i ? 0:temp);
        }
    return sum;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<H(n)<<'\n';
    }
    return 0;
}