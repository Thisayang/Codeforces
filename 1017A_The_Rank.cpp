#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int x,y,a,b,t=n-1;
		cin>>x>>y>>a>>b;
		int s=x+y+a+b,ok=1;
		while(t--)
		{
			cin>>x>>y>>a>>b;
			if(s<x+y+a+b) ok++;
		}
		cout<<ok<<endl;
	}
	return 0;
}