#include <iostream>
using namespace std;
int main()
{
	int m,n,s;
	while(cin>>m>>n>>s)
	{
		int a[101],b[101],x[101];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<s;i++) cin>>b[i];
		for(int i=1;i<=m;i++)
		{
			int ok=0;
			for(int j=0;j<n;j++)
			{
				if(i==a[j])
				{
					x[i]=1;
					ok=1;
					break;
				}
			}
			if(ok==0) x[i]=2;
		}
		for(int i=1;i<=m;i++) cout<<x[i]<<' ';
		cout<<endl;
	}
	return 0;
}