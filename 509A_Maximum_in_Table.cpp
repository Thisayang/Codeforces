#include <iostream>
using namespace std;
int main()
{
	int a[10][10];
	for(int i=0;i<10;i++)
	{
		for(int  j=0;j<10;j++)
		{
			if(i==0||j==0) a[i][j]=1;
			else a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	int n;
	while(cin>>n) cout<<a[n-1][n-1]<<endl;
	return 0;
}