#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double avg;
    cin>>t;
    while(t--)
    {
        int n,marks[1000],total=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &marks[i]);
            total += marks[i];
        }
        avg=(double)total/(double)n;

        int aboveAvg=0;
        for (int i = 0; i < n; i++)
        {
            if (marks[i] > avg)
                aboveAvg++;
        }
        printf("%.3lf%%\n", (double)aboveAvg/(double)n*100.0);
    }
    return 0;
}
