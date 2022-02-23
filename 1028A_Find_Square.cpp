#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		getchar();
		int ok=0;
		char a[116][116];
		for(int i=0;i<n;i++) gets(a[i]);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='B')
				{
					int l=0,w=0;
					for(int x=0;a[i+x][j]=='B';x++) l++;
					for(int y=0;a[i][j+y]=='B';y++) w++;
					cout<<(i+l/2)+1<<' '<<(j+w/2)+1<<endl;
					ok=1;
					break;
				}
			}
			if(ok==1) break;
		}
	}
	return 0;
}