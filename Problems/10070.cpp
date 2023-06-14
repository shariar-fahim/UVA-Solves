#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int year;
    while(scanf("%lld",&year)!=EOF)
    {
        int ly=0;
        int hu=0;
        int bu=0;

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            ly=1;
        }
        if(year%15==0)
            hu=1;
        if(ly==1 && year%55==0)
            bu=1;

        if(ly==1 && hu==1 && bu==1)
        {
            cout<<"This is leap year."<<endl;;
            cout<<"This is huluculu festival year."<<endl;
            cout<<"This is bulukulu festival year."<<endl;
        }
        else if(ly==1 && hu==1)
        {
            cout<<"This is leap year."<<endl;
            cout<<"This is huluculu festival year."<<endl;
        }
        else if(hu==1)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        else if(ly==1)
        {
            cout<<"This is leap year."<<endl;
        }
        else
            cout<<"This is an ordinary year."<<endl;
    }
    cout<<endl;
    return 0;
}
