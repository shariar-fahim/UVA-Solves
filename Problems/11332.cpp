#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n && n!=0)
    {
        long long int sum=0;
        while(1)
        {
            while(n!=0)
            {
                sum+=n%10;
                n/=10;
            }
            if(sum/10==0)
                break;
            else
            {
                n=sum;
                sum=0;
            }
        }
        cout<<sum<<endl;
    }
}
