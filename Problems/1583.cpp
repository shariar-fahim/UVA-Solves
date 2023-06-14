#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int num;
    while(t--)
    {
        cin>>num;
        int total,flag=0;
        for(int i=num-100; i<=num; i++) //num-100 bcz of TLE
        {
            int sum=i;
            total=sum;
            while(sum!=0)
            {
                total+=sum%10;
                sum/=10;
            }
            if(total==num)
            {
                flag=1;
                total=i;
                break;
            }
            total=0;
        }
        if(flag==1)
            printf("%d\n",total);
        else
            printf("0\n");
    }
    return 0;
}
