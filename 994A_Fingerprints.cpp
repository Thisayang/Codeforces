#include <iostream>
using namespace std;
int main()
{
	int a,b,x[10],y[10];
	while(cin>>a>>b)
	{
		for(int i=0;i<a;i++) cin>>x[i];
		for(int i=0;i<b;i++) cin>>y[i];
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++) if(y[j]==x[i]) cout<<y[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}