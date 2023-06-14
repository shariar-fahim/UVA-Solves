#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int sum1=0,sum2=0,d1=0,d2=0;
        float result;

        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]>='A' && 'Z'>=s1[i])
                sum1 = sum1 + s1[i] - 'A' + 1;
            else
                sum1 = sum1 + s1[i] - 'a' + 1;
        }
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]>='A' && 'Z'>=s2[i])
                sum2 = sum2 + s2[i] - 'A' + 1;
            else
                sum2 = sum2 + s2[i] - 'a' + 1;
        }

        while(sum1!=0)
        {
            d1=d1+sum1%10;
            sum1/=10;
        }
        if(d1>=10)
        {
            d1=d1%10+(d1/10)%10;
        }


        while(sum2!=0)
        {
            d2=d2+sum2%10;
            sum2/=10;
        }
        if(d2>=10)
        {
            d2=d2%10+(d2/10)%10;
        }
        //printf("\n%d %d\n",d1,d2);
        if(d1>d2)
        {
            result=(float)d2*100/(float)d1;
        }
        else
            result=(float)d1*100/(float)d2;

        printf("%.2f %%\n",result);
    }
    return 0;
}
