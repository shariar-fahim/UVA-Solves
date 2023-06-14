#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	 while(n--)
	 {
		cin>>a>>b;
		if(b%a==0)
		{
			printf("%d %d\n",a,b);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}
