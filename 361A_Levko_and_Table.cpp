#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j) cout<<m<<' ';
				else cout<<0<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}