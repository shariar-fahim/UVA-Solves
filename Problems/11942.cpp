#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        int n[20];
        for (int i=0; i<10; i++)
        {
            scanf("%d",&n[i]);
        }
        bool flag=true;

        for(int i=0; i<9; i++)
        {
            if(n[i]>=n[i+1])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            flag = true;
            for (int i = 0; i < 9; i++)
                if (n[i] <= n[i + 1])
                {
                    flag = false;
                    break;
                }
        }

        if(flag)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
