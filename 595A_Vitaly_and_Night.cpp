#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int x,y,ok=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				
				cin>>x>>y;
				if(x==1||y==1) ok++;
			}
		cout<<ok<<endl;
	}
	return 0;
}