#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[5][5],sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(i==j||i+j==(n-1)||i==n/2||j==n/2) sum+=a[i][j];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}