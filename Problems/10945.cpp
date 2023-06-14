#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    bool pal;
    while(getline(cin,s))
    {
        if(s=="DONE") break;
        pal=true;
        a="";
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(isalpha(s[i]))
            {
                a+=toupper(s[i]);
            }
        }
        len=a.size();
        for(int i=0;i<(len+1)/2;i++)
        {
            if(a[i]!=a[len-i-1])
            {
                pal=false;
                break;
            }
        }

        if(pal) cout << "You won't be eaten!" << endl;
		else cout << "Uh oh.." << endl;
    }
    return 0;
}
