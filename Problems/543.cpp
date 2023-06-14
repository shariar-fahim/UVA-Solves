#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")


const MAX=100000000;

vector<long long int>prime(MAX+1,1);
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

int main()
{
    sieve(MAX);
    ll N;
    while(cin>>N && N>=6 && N<=1000000 && N)
    {
        long long int ans,flag,a1,a2,a,b;
        if(N%2!=0) 
        {
            printf("Goldbach's conjecture is wrong.\n"); 
            break;
        }

        for(ll i=2;i<N;i++)
        {
            flag = 0;
            a1=N-i;
            if(prime[a1]==1)
                {
                    if(prime[i]==1)
                        {
                            a2=i;
                            flag=1;
                            break;
                        }
                }
        }
        if(flag)
            cout<<N<<" = "<<a2<<" + "<<a1;
        else
            printf("Goldbach's conjecture is wrong.");
        
        nl;
    }
    return 0;
}