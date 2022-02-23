#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	char a[501][501];
	while(cin>>n)
	{
		getchar();
		int sum=0;
		for(int i=0;i<n;i++)
		{
			gets(a[i]);
		}
		for(int i=1;i<n-1;i++)
		{
			for(int j=1;j<n-1;j++)
			{
				if(a[i][j]=='X'&&a[i-1][j-1]=='X'
				&&a[i-1][j+1]=='X'&&a[i+1][j-1]=='X'
				&&a[i+1][j+1]=='X') sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}