#include <iostream>
using namespace std;
int main()
{
	int m,n,k;
	while(cin>>m>>n>>k)
	{
		int a[200000]={0},ant=1;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			int sum=0;
			for(int j=m-ant;j>=0;j--)
			{
				if(sum+a[j]<=k)
				{
					sum+=a[j];
					ant++;
				}
				else if(sum+a[j]>k) break;
				if(sum==k) break;
			}
		}
		cout<<ant-1<<endl;
	}
	return 0;
}