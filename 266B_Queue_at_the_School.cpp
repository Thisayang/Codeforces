#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		char a[50];
		getchar();
		cin>>a;
		for(int i=0;i<m;i++)
		{
			for(int j=0;a[j+1]!=0;j++)
			{
				if(a[j]=='B'&&a[j+1]=='G') a[j]='G',a[j+1]='B',j++;
			}
		}
		cout<<a<<endl;
	}
	return 0;
}