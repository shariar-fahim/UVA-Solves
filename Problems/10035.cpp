#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        int counter=0,ans=0;
        while(a||b)
        {
            ans=((a%10)+(b%10)+ans)/10;
            a/=10;
            b/=10;
            if(ans)
            {
                counter++;
            }
            //cout<<counter<<endl;
        }
        if(counter==0)
            printf("No carry operation.\n");
        else if(counter==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", counter);
    }
    return 0;
}
