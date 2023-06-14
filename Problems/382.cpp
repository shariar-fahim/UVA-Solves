#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(p!=1)
            printf("PERFECTION OUTPUT\n");
        p=1;
        int sum=0;
        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                //cout<<i<<endl;
                sum+=i;
            }
        }
        //cout<<sum;
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum>n)
            printf("%5d  ABUNDANT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
