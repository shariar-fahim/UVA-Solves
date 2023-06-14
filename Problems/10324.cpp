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
    lungiman;
    string s;
    long long int n,a,b,casE=1;
    while(cin>>s)
    {
        scanf("%lld",&n);
        cout<<"Case "<<casE++<<":\n";
        while(n--)
        {
            scanf("%lld%lld",&a,&b);
            if(a>b) swap(a,b);
            bool flag = true;
            for(ll i=a;i<b;i++)
             {
                if(s[i]!=s[i+1])
                    flag = false;
             }
             (flag)?yes:no;
        }

    }
    return 0;
}