#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;
vector<ll> prime,factor;
 
bool vis[100000000];
 
void divCount(ll n){
    for(ll i=0;i<prime.size() && prime[i]*prime[i]<=n;i++){
 
        if(n%prime[i]==0){
            while(n%prime[i]==0){
 
                n/=prime[i];
 
            }
 
            factor.push_back(prime[i]);
        }
    }
    if(n>1){
        factor.push_back(n);
    }
 
}
 
void sieve(){
    for(ll i=3;i*i<=N;i+=2){
        if(vis[i]==0){
            for(ll j=i*i;j<=N;j+=2*i){
                vis[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3;i<=N;i+=2){
        if(vis[i]==0) prime.push_back(i);
    }
 
}
 
int main(){
    sieve();
    ll n,cnt=0,mx=0;
 
    while(cin>>n){
 
        if(n==0) break;
 
        else{
            if(n<0){
                n=n*(-1);
            }
            divCount(n);
            if(factor.size()>1){
                     
                printf("%lld\n",factor[factor.size()-1]);
                
            }
            else{
                 printf("-1\n");
                 
            }
 
        }
        factor.clear();
    }
 
    return 0;
}