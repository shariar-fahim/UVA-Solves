#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum,t,avg;
    int cnt=1;
    cin>>t;
    while(t--)
    {
        sum=0;
        for(int i=0;i<12;i++)
            {
                cin>>n;
                sum+=n;
            }
        avg=sum/12.0;

        if(avg>999.0)
        {
            int a=avg/1000;
            printf("%d $%d,",cnt++, a);
			double b=fmod(avg, 1000.0);
			printf("%.2lf\n", b);
        }
        else
            printf("%d $%.2lf\n",cnt++, avg);
    }
    return 0;
}


