#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if(c>a+b) cout<<2*(a+b)<<endl;
		else if(a>b+c) cout<<2*(b+c)<<endl;
		else if(b>a+c) cout<<2*(a+c)<<endl;
		else cout<<a+b+c<<endl;
	}
	return 0;
}