#include <bits/stdc++.h>
using namespace std;
#define lungiman                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")

int main()
{
    // lungiman;
    string B, G, C;

    while (scanf("%d %d %d %d %d %d %d %d %d", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
    {
        ll min = INT_MAX;
        ll temp = 0;
        string ans;
        // BCG
        temp = C[0] + G[0] + B[1] + G[1] + B[2] + C[2];
        if (temp < min)
        {
            min = temp;
            ans = "BCG";
        }
        // BGC
        temp = C[0] + G[0] + B[1] + C[1] + B[2] + G[2];
        if (temp < min)
        {
            min = temp;
            ans = "BGC";
        }
        // CBG
        temp = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
        if (temp < min)
        {
            min = temp;
            ans = "CBG";
        }
        // CGB
        temp = B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
        if (temp < min)
        {
            min = temp;
            ans = "CGB";
        }
        // GBC
        temp = C[0] + B[0] + C[1] + G[1] + B[2] + G[2];
        if (temp < min)
        {
            min = temp;
            ans = "GBC";
        }
        // GCB
        temp = C[0] + B[0] + B[1] + G[1] + G[2] + C[2];
        if (temp < min)
        {
            min = temp;
            ans = "GCB";
        }
        cout << ans << ' ' << min;
        nl;
    }
    return 0;
}