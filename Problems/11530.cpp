#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,counter=1,press;
    char a[100],b[10];
    cin>>t;
    gets(b);
    while(t--)
    {
        gets(a);
        press=0;
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
            {
                press+=1;
            }

            else if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
            {
                press+=2;
            }
            else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
            {
                press+=3;
            }
            else if(a[i]=='s'||a[i]=='z')
            {
                press+=4;
            }
        }
        cout<<"Case #"<<counter++<<": "<<press<<endl;
    }
    return 0;
}
