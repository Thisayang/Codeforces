#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char a[100][100];
		getchar();
		int sum=0;
		for(int i=0;i<n;i++) gets(a[i]);
		for(int i=0;i<n;i++)
		{
			int s=0,m=0;
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='C') s++;
				if(a[j][i]=='C') m++;
			}
			sum+=(s*(s-1)/2);
			sum+=(m*(m-1)/2);
		}
		cout<<sum<<endl;
	}
	return 0;
}