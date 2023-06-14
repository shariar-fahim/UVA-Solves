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
    ll testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        ll x, y, n, z;
        cin >> x >> y >> n;
        z = 1;
        while (y != 0)
        {
            z = (z * x * (y & 1) + z * ((y & 1) == 0)) % n;
            x = (x * x) % n;
            y >>= 1;
        }
        cout << z << '\n';
    }
    return 0;
}