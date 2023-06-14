#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")

const long long int MAX=20000010;
vector<long long int>prime(MAX+1,1);
vector<long long int>tPrime;
void sieve(long long int n)
{
   
    for (long long int p = 2; p * p <= n; p++) 
    {
        if (prime[p] == true) 
        {
            for (long long int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
void twin_prime()
{
    long long int j=1;
    for(long long int i=3;i<=MAX;i++)
    {
        if(prime[i] && prime[i+2])
            {
                tPrime[j++]=i;
            }
    }
}

int main()
{
    sieve(MAX);
    twin_prime();
    long long int N;
    while(cin>>N)
    {
       long long int a,b;
       a=tPrime[N];
       b=tPrime[N]+2;
       printf("(%lld, %lld)\n",a,b);
    }
    return 0;
}