#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(a<=x&&a+b<=x+y&&a+b+c<=x+y+z) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}