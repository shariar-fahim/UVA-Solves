#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        cin>>A;
        int n;
        cin>>n;
        while(n--)
        {
            string B;
            cin>>B;
            int l = A.find(B);
            if(l>=0)
                cout<<"y"<<endl;
            else
                cout<<"n"<<endl;
        }
    }
    return 0;
}
// sol 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int n,k;
    scanf("%d",&n);
    while(n--)
    {
        cin >> s;
        scanf("%d",&k);
        while(k--)
        {
            string st = "";
            cin >> s1;
            for(int i = 0 ; i < s1.size() ; i++)
                st += s[i];
            if( s1 == st)
                cout << "y" << endl;
            else
                cout << "n" << endl;
        }
    }

    return 0;
}
