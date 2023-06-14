#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    while(gets(ch))
    {
        int word=0;
        for(int i=0;i<strlen(ch);)
        {
            //cout<<"i0="<<i<<endl;
            if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
            {
                while((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
                {
                    i++;
                }
                //cout<<"i1="<<i<<endl;
                word++;
            }
            else
                i++;
        }
        cout<<word<<endl;
    }
    return 0;
}
