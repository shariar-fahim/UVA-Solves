#include <bits/stdc++.h>
char binary[10000000];
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        long long int a=0,cnt=0;
        while(n!=0)
        {
            binary[a] = n%2+'0';

            if(binary[a]=='1')
                cnt++;

            n=n/2;
            a++;
        }
        //strrev(binary);

        cout<<"The parity of ";

        while(a--)printf("%c",binary[a]);
        cout<<" is "<<cnt++<<" (mod 2)."<<endl;
    }
    return 0;
}
