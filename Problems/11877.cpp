#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (scanf("%d",&n)&& n!=0)
    {
        int sum=0;
        while(n>=3)
        {
            sum+=n/3;
            n=(n/3)+(n%3);
            if(n==2)
                n++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

