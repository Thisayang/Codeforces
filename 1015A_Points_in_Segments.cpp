#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[101]={0};
		int x,y,t=0;
		while(n--)
		{
			cin>>x>>y;
			for(int i=x;i<=y;i++) a[i]=1;
		}
		for(int i=1;i<=m;i++)
		{
			if(a[i]==0) t++;
		}
		if(t==0) cout<<t;
		else cout<<t<<endl;
		for(int i=1;i<=m;i++)
		{
			if(a[i]==0) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}