#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,h,v,s,i,c,counT;
    while(cin>>l>>h)
    {
        if(l==0 && h==0)
            break;
        if(l>h)
            swap(l,h);

        s=0;

        for(i=l; i<=h; i++)
        {
            c=i;
            counT=0;
            do
            {
                if(c%2!=0)
                    c=3*c+1;
                else
                    c/=2;
                counT++;
            }
            while(c!=1);

            if(s<counT)
            {
                s=counT;
                v=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,v,s);
    }
    return 0;
}
