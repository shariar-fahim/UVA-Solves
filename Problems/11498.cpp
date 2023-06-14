#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, N, M, x, y;
    cin >> n;
    while (n != 0)
    {
        cin >> N >> M;
        while (n--)
        {
            cin >> x >> y;
            if (x == N || y == M)
                cout << "divisa";
            else if (x < N && y > M)
                cout << "NO";
            else if (x > N && y > M)
                cout << "NE";
            else if (x > N && y < M)
                cout << "SE";
            else if (x < N && y < M)
                cout << "SO";
            cout << endl;
        }
        cin >> n;
    }
    return 0;
}
