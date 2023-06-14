#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        ++counter;
        int h[n],sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            sum+=h[i];
        }
        int avg= sum/n;
        for(int i=0;i<n;i++)
        {
            if(h[i]>avg)
            {
                ans+=h[i]-avg;
            }
        }
        cout << "Set #" << counter  << endl;
        cout << "The minimum number of moves is " << ans << "." << endl << endl;
    }
    return 0;
}
