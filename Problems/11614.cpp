#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long n;
        cin>>n;
        cout << ((int)sqrt(8*n + 1) - 1) / 2 << '\n';
    }
    return 0;
}
