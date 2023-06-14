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
    long long int N,B,H,W;
    while(cin>>N>>B>>H>>W)
    {
        bool flag = 0;
        long long int ans=INT_MAX,rent;
        while(H--)
        {
            long long int P,room,cnt=0;
            cin>>P;
            for(ll i=0;i<W;i++)
                {
                    cin>>room;
                    if(room>=N)
                        {
                            rent=N*P;
                            if(rent<ans)
                            {
                                ans=rent;
                            }
                        }
                }  
        }
        if(ans<B)
            cout<<ans<<'\n';
        else
            cout<<"stay home"<<'\n';
    }
    return 0;
}