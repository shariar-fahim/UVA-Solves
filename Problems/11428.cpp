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
    long long int N;
    while(scanf("%lld",&N) && N)
    {
        long long int X,Y;
        bool flag = 0;

        for(X=1;X<=sqrt(N);X++)
        {
            if(X*X*X > N)
            {
                for(Y=1; Y<X;Y++)
                {
                    if(X*X*X- Y*Y*Y == N)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
        }
        (flag)? cout<<X<<' '<<Y<<'\n':cout<<"No solution"<<'\n';
    }
    return 0;
}