#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")

vector<int>isPrime;
ll M=10000;
vector<ll>prime(M+1,1);
void Sieve(ll n)
{
   isPrime.push_back(1);
    for (ll p = 2; p * p <= n; p++) 
    {
        if (prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for(ll p=2;p<=n;p++)
        if(prime[p])
            isPrime.push_back(p);
    
}

int main()
{
    Sieve(M);
    int n,c;
    while(cin>>n>>c)
    {

    }
    return 0;
}