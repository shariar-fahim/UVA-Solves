#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int t1,t2,f,a,c1,c2,c3,avg;
        cin>>t1>>t2>>f>>a>>c1>>c2>>c3;
        if(c1<=c2 && c1<=c3)
        {
            avg = (c2+c3)/2;
        }
        else if(c2<=c1 && c2<=c3)
        {
            avg = (c1+c3)/2;
        }
        else
        {
            avg = (c1+c2)/2;
        }
        int total=t1+t2+f+a+avg;
        if(total>=90)
        {
            printf("Case %d: A\n",i++);
        }
        else if(total>=80)
        {
            printf("Case %d: B\n",i++);
        }
        else if(total>=70)
        {
            printf("Case %d: C\n",i++);
        }
        else if(total>=60)
        {
            printf("Case %d: D\n",i++);
        }
        else if(total<60)
        {
            printf("Case %d: F\n",i++);
        }
    }
    return 0;
}
