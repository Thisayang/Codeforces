#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>m>>n)
	{
		getchar();
		char a[100][100];
		int ok=0,x[4],y[4];
		for(int i=0;i<m;i++) cin>>a[i];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='*')
				{
					x[ok]=i+1;
					y[ok]=j+1;
					ok++;
				}
			}
		}
		sort(x,x+3);
		if(x[0]==x[1]) cout<<x[2]<<' ';
		else cout<<x[0]<<' ';
		sort(y,y+3);
		if(y[0]==y[1]) cout<<y[2]<<endl;
		else cout<<y[0]<<endl;
	}
	return 0;
}