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
    ll testcase;
    string s;
    long long a[300];
    cin>>testcase;
    getchar();
    while(testcase--)
    {
       getline(cin,s);
       stringstream p(s);
       long long N=0;
       while(p >> a[N])
            N++;

       long long maxGcd=0;     
       for(ll i=0;i<N;i++)
       {
        for(ll j=i+1;j<N;j++)
        {
            maxGcd = max(maxGcd,__gcd(a[i],a[j]));
        }
       }
       cout<<maxGcd<<'\n';
    }
    return 0;
}