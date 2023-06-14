#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")

string sentences[101];
int main()
{
    ll pos = 0;
    ll longest=0;
    while(getline(cin,sentences[pos]))
    {
        if(sentences[pos].size()>longest)
        {
            longest=sentences[pos].size();
        }
        pos++;
    }
    for (int j = 0; j < longest; ++j)
    {
        for (int i = pos - 1; i >= 0; --i)
        {
            if (sentences[i].size() > j)
                cout << sentences[i][j];
            else
                cout << ' ';
        }
        cout << '\n'; }
    return 0;
}