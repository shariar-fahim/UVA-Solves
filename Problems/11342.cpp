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
    //lungiman;
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
       long long int N,a,b,c,flag=0;
       a=b=c=-1;
       cin>>N;
       for(ll i=0;i<=sqrt(N);i++)
           {
            for(ll j=i;j<=sqrt(N);j++)
            {
                for(ll k=j;k<=sqrt(N);k++)
                {
                    if(i*i + j*j + k*k == N)
                        {
                            a=i;
                            b=j;
                            c=k;
                            flag=1;
                            break;
                        }
                }
                if(flag) break;
            }
            if(flag) break;
           }
        if(a==-1 && b==-1 && c==-1)
            printf("-1\n");
        else
            printf("%lld %lld %lld\n",a,b,c);
    }
    return 0;
}