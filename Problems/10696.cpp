#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        if(n<=100)
            cout<<"f91"<<"("<<n<<") = "<<"91"<<endl;
        else
            cout<<"f91("<<n<<") = "<<n-10<<endl;
    }
    return 0;
}

